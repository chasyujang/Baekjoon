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
long long dp[100001][3] = {};
int mod = 9901;

int main() {
	cin >> n;
	dp[1][0] = 0;
	dp[1][1] = 1;
	dp[1][2] = 1;


	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2];
		dp[i][0] = dp[i][0] % mod;
		dp[i][1] = dp[i - 1][0] + dp[i - 1][2] + 1;
		dp[i][1] = dp[i][1] % mod;
		dp[i][2] = dp[i - 1][0] + dp[i - 1][1] + 1;
		dp[i][2] = dp[i][2] % mod;
	}
	int ans = (dp[n][0] + dp[n][1] + dp[n][2] + 1) % mod;
	cout << ans;
}