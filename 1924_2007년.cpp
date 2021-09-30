#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	for (int i = x - 1; i >= 1; i--) {
		if (i == 2) {
			y = y + 28;
		}
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			y = y + 31;
		}
		if (i == 4 || i == 6 || i == 9 || i == 11) {
			y = y + 30;
		}
	}
	int d = y % 7;
	if (d == 1) cout << "MON";
	if (d == 2) cout << "TUE";
	if (d == 3) cout << "WED";
	if (d == 4) cout << "THU";
	if (d == 5) cout << "FRI";
	if (d == 6) cout << "SAT";
	if (d == 0) cout << "SUN";
}