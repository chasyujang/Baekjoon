#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int dp[1000005];

int main() {
	cin >> n;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= n; i++) {
		if ((i % 2 == 0) && (i % 3 != 0)) dp[i] = min(dp[i - 1] + 1, dp[i / 2] + 1);
		if ((i % 2 != 0) && (i % 3 == 0)) dp[i] = min(dp[i - 1] + 1, dp[i / 3] + 1);
		if ((i % 2 == 0) && (i % 3 == 0)) dp[i] = min(dp[i - 1] + 1, min(dp[i / 2] + 1, dp[i / 3] + 1));
		if ((i % 2 != 0) && (i % 3 != 0))dp[i] = dp[i - 1] + 1;
	}
	cout << dp[n];
}


