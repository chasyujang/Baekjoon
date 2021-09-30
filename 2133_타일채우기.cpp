#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int n;
long long dp[1001] = {};

int main() {
	cin >> n;
	dp[0] = 1;
	dp[2] = 3;

	for (int i = 4; i <= n; i++) {
		dp[i] = 3 * dp[i - 2];
		for (int j = 4; j <= i; j = j + 2) {
			dp[i] = dp[i] + 2 * dp[i - j];
		}
	}
	cout << dp[n];
}