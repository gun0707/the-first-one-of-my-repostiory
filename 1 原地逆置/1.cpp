#include <iostream>
#include <vector>
using namespace std;

// ------------------------------------------------------
// 鈶?缁撶偣缁撴瀯浣撴斁鍦ㄣ€屽叏灞€浣滅敤鍩熴€嶏紙涓嶈兘鏀惧湪 main 鍐呴儴锛?
// ------------------------------------------------------
struct Node {
    int data;
    Node* next;
};

// ------------------------------------------------------
// 鈶?寤鸿〃鍑芥暟锛氭妸 vector 鐨勫厓绱犲瓨杩涢摼琛?
//    e 閫氳繃 const 寮曠敤浼犲叆锛屾墠鑳藉湪鍑芥暟鍐呰闂?
// ------------------------------------------------------
Node* create_list(const vector<int>& e) {
    Node* head = new Node;        // 澶寸粨鐐癸紙data 涓嶅瓨鏈夋晥鏁版嵁锛?
    head->next = nullptr;
    Node* tail = head;

    for (size_t i = 0; i < e.size(); ++i) {
        Node* p = new Node;
        p->data = e[i];
        p->next = nullptr;
        tail->next = p;           // 灏炬彃
        tail = p;                 // 绉诲姩灏炬寚閽?
    }
    return head;
}

// ------------------------------------------------------
// 鈶?閬嶅巻杈撳嚭
// ------------------------------------------------------
void print_list(Node* head) {
    Node* p = head->next;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// ------------------------------------------------------
// 鈶?鍘熷湴閫嗙疆鍗曢摼琛紙涓夋寚閽堟硶锛?
// ------------------------------------------------------
Node* reverse_list(Node* head) {
    Node* prev = nullptr;
    Node* cur = head->next;       // 浠庣涓€涓湁鏁堢粨鐐瑰紑濮?
    while (cur != nullptr) {
        Node* nxt = cur->next;    // 鏆傚瓨涓嬩竴涓粨鐐?
        cur->next = prev;         // 鍙嶈浆鎸囬拡
        prev = cur;               // prev 鍓嶇Щ
        cur = nxt;                // cur 鍓嶇Щ
    }
    head->next = prev;            // 澶寸粨鐐规寚鍚戞柊鐨勭涓€涓粨鐐?
    return head;
}

// ------------------------------------------------------
// 鈶?閲婃斁閾捐〃鍐呭瓨
// ------------------------------------------------------
void destroy_list(Node* head) {
    Node* p = head;
    while (p != nullptr) {
        Node* q = p;
        p = p->next;
        delete q;
    }
}
template<typename T>
void reverse(Node*head, vector<T>& e,int n) {
    int n;
    cin >> n;

    while (1) {
        int i = 0;
        if (n - i - 1 = i || n - 1 - i < i) {
            break;
        }
        T temp;
        temp = e[i];
        e[i] = e[n - i - 1];
        e[n - i - 1] = temp;
    }

}


int main() {
    int n;
    cin >> n;

    // 鍦嗘嫭鍙?(n)锛氬垱寤?n 涓粯璁ゅ厓绱狅紱鑺辨嫭鍙?{n} 鏄垵濮嬪寲鍒楄〃锛屽彧浼氭斁 1 涓厓绱?
    vector<int> e(n);

    for (int i = 0; i < n; ++i) {
        cin >> e[i];
    }

    Node* head = create_list(e);

    cout << "閫嗙疆鍓? ";
    print_list(head);

    head = reverse_list(head);

    cout << "閫嗙疆鍚? ";
    print_list(head);

    destroy_list(head);           // 鐢ㄥ畬璁板緱閲婃斁

    return 0;
}

