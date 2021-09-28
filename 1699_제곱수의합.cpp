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
int dp[100001] = {};

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sqrt(i); j++) {
			if (dp[i] - dp[i - j * j] > 0 || dp[i] == 0) dp[i] = dp[i - j * j] + 1;
		}
	}
	cout << dp[n];
}