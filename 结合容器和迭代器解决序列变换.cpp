#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;
//请按要求填写代码
template<typename T>
class InvT {
public:
    T operator()(const& t) {
        return -t;
    }
};
template<typename T>
class SqrT {
public:
    T operator()(const &t)const {
        return t * t;

    }
};
template <typename T>
class CubT {
public:
    T operator()(const& t)const {
        return t * t * t;
    }
};
// 模板函数：自定义输出内容
template <typename T>
void OutPutCont(string strName, ostream& os, T begin, T end) {
    os << strName << ":";
    for (; begin != end; begin++)
    {
        os << setw(5) << *begin;
    }
    os << endl;
}

int main() {
    const int N = 5;
    int a[N] = { 5, 2, 7, 1, 4 }; //整型数组      
    vector<double> vb(N);       //vector(向量)容器     
    OutPutCont("数组a", cout, a, a + N);         //输出数组a       
    transfrom(a, a + N, vb.begin(), InvT<int>); //结合容器和迭代器取反数组a    
    OutPutCont("取反a", cout, vb.begin(), vb.end());
    transfrom(a, a + N, vb.begin(), SqrT<int>); //结合容器和迭代器平方数组a    
    OutPutCont("平方a", cout, vb.begin(), vb.end());
    transfrom(a, a + N, vb.begin(), CubT<int>); //结合容器和迭代器立方数组a    
    OutPutCont("立方a", cout, vb.begin(), vb.end());
    return 0;
}






