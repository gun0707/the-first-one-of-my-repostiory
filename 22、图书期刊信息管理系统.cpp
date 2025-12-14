
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

// 书刊信息结构体
struct Book {
    string id;         // 书刊编号
    string name;       // 书名（期刊含年份期数/合订本标识）
    string publisher;  // 出版单位
    string publishTime;// 出版时间（格式：YYYY-MM）
    double price;      // 价格
    string category;   // 书籍分类号
    bool isJournal;    // 是否为期刊（true=期刊，false=普通书籍）
};

// 全局常量与变量
const string FILE_NAME = "books.txt"; // 数据文件路径
vector<Book> bookList;                // 内存中的书刊列表


// 从文件加载书刊信息
void loadBooks() {
    ifstream fin(FILE_NAME);
    if (!fin) {
        cout << "首次运行，创建新数据文件！" << endl;
        return;
    }
    Book b;
    while (fin >> b.id >> b.name >> b.publisher >> b.publishTime >> b.price >> b.category >> b.isJournal) {
        bookList.push_back(b);
    }
    fin.close();
}

// 将书刊信息写入文件
void saveBooks() {
    ofstream fout(FILE_NAME);
    for (const auto& b : bookList) {
        fout << b.id << " " << b.name << " " << b.publisher << " "
            << b.publishTime << " " << b.price << " " << b.category << " "
            << b.isJournal << endl;
    }
    fout.close();
}


void addBook() {
    Book b;
    cout << "请输入书刊编号：";
    cin >> b.id;
    cout << "请输入书名（期刊格式：名称-YYYY-NN，如读者-2014-21）：";
    cin >> b.name;
    cout << "请输入出版单位：";
    cin >> b.publisher;
    cout << "请输入出版时间（YYYY-MM）：";
    cin >> b.publishTime;
    cout << "请输入价格：";
    cin >> b.price;
    cout << "请输入分类号：";
    cin >> b.category;
    cout << "是否为期刊（1=是，0=否）：";
    cin >> b.isJournal;

    bookList.push_back(b);
    // 按书名排序
    sort(bookList.begin(), bookList.end(), [](const Book& a, const Book& b) {
        return a.name < b.name;
        });
    saveBooks();
    cout << "录入成功！" << endl;
}


void handleExpiredJournal(int currentYear) {
    vector<Book> newList;
    vector<Book> expiredJournals; // 存储过期单期期刊
    int expiredYear = currentYear - 1; // 上一年的期刊过期

    // 筛选过期单期期刊与保留的书刊
    for (const auto& b : bookList) {
        if (b.isJournal) {
            // 提取期刊名称中的年份（格式：名称-YYYY-NN）
            size_t pos1 = b.name.find("-");
            size_t pos2 = b.name.find("-", pos1 + 1);
            if (pos1 != string::npos && pos2 != string::npos) {
                string yearStr = b.name.substr(pos1 + 1, 4);
                int year = stoi(yearStr);
                if (year == expiredYear && b.name.find("合") == string::npos) {
                    expiredJournals.push_back(b); // 过期单期期刊
                    continue;
                }
            }
        }
        newList.push_back(b);
    }

    // 生成合订本（按期刊名称分组）
    if (!expiredJournals.empty()) {
        string baseName = expiredJournals[0].name.substr(0, expiredJournals[0].name.find("-"));
        Book boundJournal;
        boundJournal.id = "J" + to_string(expiredYear) + "HB"; // 合订本编号规则
        boundJournal.name = baseName + "-" + to_string(expiredYear) + "-合";
        boundJournal.publisher = expiredJournals[0].publisher;
        boundJournal.publishTime = to_string(expiredYear) + "-07"; // 7月生成合订本
        boundJournal.price = expiredJournals[0].price * expiredJournals.size() * 0.8; // 合订本价格折扣
        boundJournal.category = expiredJournals[0].category;
        boundJournal.isJournal = true;
        newList.push_back(boundJournal);
        // 重新排序
        sort(newList.begin(), newList.end(), [](const Book& a, const Book& b) {
            return a.name < b.name;
            });
    }

    bookList = newList;
    saveBooks();
    cout << "过期期刊处理完成，已生成合订本！" << endl;
}


void deleteBook() {
    string id;
    cout << "请输入要删除的书刊编号：";
    cin >> id;
    for (auto it = bookList.begin(); it != bookList.end(); ++it) {
        if (it->id == id) {
            bookList.erase(it);
            saveBooks();
            cout << "删除成功！" << endl;
            return;
        }
    }
    cout << "未找到该书刊编号！" << endl;
}

void showBooks() {
    cout << left << setw(10) << "编号" << setw(20) << "书名" << setw(20) << "出版单位"
        << setw(12) << "出版时间" << setw(8) << "价格" << setw(10) << "分类号" << setw(8) << "是否期刊" << endl;
    cout << "-------------------------------------------------------------------------------------------------" << endl;
    for (const auto& b : bookList) {
        cout << left << setw(10) << b.id << setw(20) << b.name << setw(20) << b.publisher
            << setw(12) << b.publishTime << setw(8) << b.price << setw(10) << b.category
            << setw(8) << (b.isJournal ? "是" : "否") << endl;
    }
}


void searchBooks() {
    int choice;
    string keyword;
    cout << "请选择查询方式：1-按书名 2-按出版单位 3-按分类号" << endl;
    cin >> choice;
    cout << "请输入查询关键词：";
    cin >> keyword;

    cout << left << setw(10) << "编号" << setw(20) << "书名" << setw(20) << "出版单位"
        << setw(12) << "出版时间" << setw(8) << "价格" << setw(10) << "分类号" << setw(8) << "是否期刊" << endl;
    cout << "-------------------------------------------------------------------------------------------------" << endl;

    for (const auto& b : bookList) {
        bool match = false;
        switch (choice) {
        case 1: // 书名模糊查询
            if (b.name.find(keyword) != string::npos) match = true;
            break;
        case 2: // 出版单位模糊查询
            if (b.publisher.find(keyword) != string::npos) match = true;
            break;
        case 3: // 分类号前缀匹配
            if (b.category.substr(0, keyword.size()) == keyword) match = true;
            break;
        default:
            cout << "无效选项！" << endl;
            return;
        }
        if (match) {
            cout << left << setw(10) << b.id << setw(20) << b.name << setw(20) << b.publisher
                << setw(12) << b.publishTime << setw(8) << b.price << setw(10) << b.category
                << setw(8) << (b.isJournal ? "是" : "否") << endl;
        }
    }
}



void showMenu() {
    cout << "\n===== 图书期刊信息管理系统 =====" << endl;
    cout << "1. 录入书刊信息" << endl;
    cout << "2. 删除书刊信息" << endl;
    cout << "3. 浏览所有书刊" << endl;
    cout << "4. 模糊查询书刊" << endl;
    cout << "5. 处理过期期刊（生成合订本）" << endl;
    cout << "0. 退出系统" << endl;
    cout << "================================" << endl;
    cout << "请输入操作选项：";
}

int main() {
    loadBooks(); // 启动时加载文件数据
    int choice, year;
    while (true) {
        showMenu();
        cin >> choice;
        switch (choice) {
        case 1: addBook(); break;
        case 2: deleteBook(); break;
        case 3: showBooks(); break;
        case 4: searchBooks(); break;
        case 5:
            cout << "请输入当前年份（如2025）：";
            cin >> year;
            handleExpiredJournal(year);
            break;
        case 0:
            saveBooks();
            cout << "退出系统，数据已保存！" << endl;
            return 0;
        default: cout << "无效选项，请重新输入！" << endl;
        }
    }
}

