#include <iostream>
using namespace std;
int main() {

	int n, m, x, y;
	cin >> n >> m >> x >> y;int x3, y3;
	int bomb_x1[1000], bomb_y1[1000], bomb_x2[1000], bomb_y2[1000];
	for (int i = 1;i <= x;i++) {
		cin >> bomb_x1[i] >> bomb_y1[i] >> bomb_x2[i] >> bomb_y2[i];
	}
	for (int j= 1;j <= y;j++) {
		cin >> x3 >> y3;
		int t = 0, ground = 0;
		for (int i = 1;i <= x;i++) {
			if (bomb_x1[i] <= x3 && bomb_x2[i] >= x3 && bomb_y1[i] <= y3 && bomb_y2[i] >= y3)
			{
				t++;ground = i;

			}
		}if (t == 0) {
			cout << "N" << endl;
		}
		else { cout << "Y" << " " << t << " " << ground << endl; }
	}
		
	return 0;


}


