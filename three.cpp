#include<iostream>
#include<string>
using namespace std;
int main() {
	 int board[10] = { 0 };
	 string m;
	 cin >> m;
	 for (int i = 0;i < m.size();i++) {
		 int pos = m[i] - '0';
		 if (i % 2 == 1) {
			 board[pos] = 2;
		 }
		 else board[pos] = 1;

	 }
	 if ((board[1] == 1 && board[2] == 1 && board[3] == 1) || (board[4] == 1 && board[5] == 1 && board[6] == 1) || (board[7] == 1 && board[8] == 1 && board[9] == 1) || (board[1] == 1 && board[5] == 1 && board[9] == 1)||(board[1]==1&&board[4]==1&&board[7]==1)||(board[2]==1&&board[5]==1&&board[8]==1)||(board[3]==1&&board[6]==1&&board[9]==1)||(board[3]==1&&board[5]==1&&board[7]==1)) {
		 cout << "xiaoa wins.";return 0;
	 }
	 if ((board[1] == 2 && board[2] == 2 && board[3] == 2) || (board[4] == 2 && board[5] == 2 && board[6] == 2) || (board[7] == 2 && board[8] == 2 && board[9] == 2) || (board[1] == 2 && board[5] == 2 && board[9] == 2)||(board[1]==2&&board[4]==2&&board[7]==2)||(board[2]==2&&board[5]==2&&board[8]==2) ||(board[3]==2&&board[6]==2&&board[9]==2)||(board[3]==2&&board[5]==2&&board[7]==2)) {
		 cout << "uim wins.";return 0;
	 }
	 else cout << "drew.";
	 return 0;
}