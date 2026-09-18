
#include<iostream>
using namespace std;
class  MyStr {
	int m_length;
	char* m_buff;
private:
	static int strlen(const char* ptr);
	static void strncpy(char* dest, const char* src, int n);
public:MyStr() {};
	MyStr(const char* Val );
	~MyStr() { delete[] m_buff; }
	int size() {
		return m_length;
	}
	friend ostream& operator<<(ostream&,const MyStr&);
	friend MyStr operator+(const MyStr&, const MyStr&);
};
int MyStr::strlen(const char* ptr) {
	int count = 0;
	while (ptr != NULL && ptr != '\0') {
		ptr++;
		count++;
	}
	return count;
}
void MyStr::strncpy(char* dest, const char* src, int n) {
	for (int i = 0;i < n;i++) {

		dest[i] = src[i];
	}
}
MyStr::MyStr(const char* Val ) :
	m_length(strlen(Val)),
	m_buff(m_length > 0 ?new char[m_length]:nullptr){
	if (m_buff != nullptr) {
		strncpy(m_buff, Val, m_length);
	}


}
ostream& operator<<(ostream& os, const MyStr& s) {
	for (int i = 0;i < s.m_length;i++) {
		os << s.m_buff[i];
}

}
MyStr operator+(const MyStr& s1, const MyStr& s2) {
	MyStr ans;
	ans.m_length = s1.m_length + s2.m_length;
	ans.m_buff = new char[ans.m_length];
	MyStr::strncpy(ans.m_buff, s1.m_buff, s1.m_length);
	MyStr::strncpy(ans.m_buff + s1.m_length, s2.m_buff, s2.m_length);
	return ans;
}
