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


long long warp(long long d) {
	long long n = 0;
	long long max_n = 0;
	long long min_n = 0;
	long long cnt = 0;
	long long double_n = 0;
	while (1) {
		n++;
		double_n = n * n;
		min_n = double_n - n;
		max_n = double_n + n;
		if (min_n < d&&d <= max_n) {
			if (min_n < d&&d <= double_n) cnt = n * 2 - 1;
			else cnt = n * 2;
			break;
		}

	}
	return cnt;
}
int t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	while (t--) {
		long long a, b;
		cin >> a >> b;
		long long d = b - a;
		cout << warp(d) << '\n';
	}
}