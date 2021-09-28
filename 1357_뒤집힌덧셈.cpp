#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int number1, number2;
int save[5];

int ReV(int a) {
	memset(save, -1, sizeof(save));
	for (int i = 0; i < 100; i++) {
		save[i] = a % 10;
		a = a / 10;
		if (a == 0) break;
	}
	int ret = 0;
	for (int i = 0; i < 100; i++) {
		if (save[i] == -1) break;
		ret = ret * 10;
		ret = ret + save[i];
	}
	return ret;
}

int main() {
	cin >> number1 >> number2;
	cout << ReV(ReV(number1) + ReV(number2));

}