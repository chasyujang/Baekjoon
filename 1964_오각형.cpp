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

int mod = 45678;

int main() {
	int n;
	cin >> n;

	long long sum = 5;

	if (n == 1) {
		cout << sum;
		return 0;
	}

	for (int i = 2; i <= n; i++) {
		sum += i * 3 + 1;
	}

	cout << sum % mod;

	return 0;
}