#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<set>
#include<vector>
#include<algorithm>
#include<stack>
#include<sstream>

using namespace std;

int Y, M;
int Y_sum, M_sum;
int n;

int main() {
	cin >> n;

	while (n--) {
		int a;
		cin >> a;

		Y_sum += 10 * ((a / 30) + 1);
		M_sum += 15 * ((a / 60) + 1);



	}
	if (Y_sum < M_sum) {
		cout << "Y " << Y_sum;
	}
	else if (Y_sum > M_sum) {
		cout << "M " << M_sum;
	}
	else if (Y_sum == M_sum) {
		cout << "Y M " << Y_sum;
	}
}