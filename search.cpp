#include<iostream>
using namespace std;
#include<vector>
int main() {
	int n;
	cin >> n;
	vector<string> name(n);
	vector <float> temperature(n);
	vector <int> judgement(n);
	int cont=0;
	for (int i = 0;i < n;i++)
	{
		cin >> name[i] >> temperature[i] >> judgement[i];
		if (temperature[i] >= 37.5 && judgement[i] == 1) {
			cout << name[i] << endl;
			cont++;
		}
	}
	cout << cont;
	return 0;
}