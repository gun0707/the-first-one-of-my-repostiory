#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

// 执行二元运算
int calculate(int a, int b, char op) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;  // 整数除法
    default: return 0;
    }
}

// 获取运算符优先级
int getPriority(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int main() {
    string expression;

    // 读取整行表达式
    getline(cin, expression);

    // 去除空格
    string cleanExpr;
    for (char c : expression) {
        if (c != ' ') {
            cleanExpr += c;
        }
    }

    stack<int> numStack;    // 数字栈
    stack<char> opStack;    // 运算符栈

    int currentNum = 0;
    bool readingNum = false;

    for (int i = 0; i < cleanExpr.length(); i++) {
        char c = cleanExpr[i];

        // 如果是数字
        if (isdigit(c)) {
            currentNum = currentNum * 10 + (c - '0');
            readingNum = true;
        }
        // 如果是运算符或等号
        else {
            // 将当前数字入栈
            if (readingNum) {
                numStack.push(currentNum);
                currentNum = 0;
                readingNum = false;
            }

            // 遇到等号，结束处理
            if (c == '=') {
                break;
            }

            // 处理运算符优先级
            while (!opStack.empty() && getPriority(opStack.top()) >= getPriority(c)) {
                // 弹出运算符和两个操作数进行计算
                int b = numStack.top(); numStack.pop();
                int a = numStack.top(); numStack.pop();
                char op = opStack.top(); opStack.pop();

                int result = calculate(a, b, op);
                numStack.push(result);
            }

            // 当前运算符入栈
            opStack.push(c);
        }
    }

    // 处理最后一个数字（如果有）
    if (readingNum) {
        numStack.push(currentNum);
    }

    // 处理剩余的运算符
    while (!opStack.empty()) {
        int b = numStack.top(); numStack.pop();
        int a = numStack.top(); numStack.pop();
        char op = opStack.top(); opStack.pop();

        int result = calculate(a, b, op);
        numStack.push(result);
    }

    // 输出最终结果
    cout << numStack.top() << endl;

    return 0;
}
