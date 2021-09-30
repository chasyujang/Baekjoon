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
int score[3] = {};
int dp[4][3] = {};

int max3(int a, int b, int c) {
	int ret = max(max(a, b), c);
	return ret;
}
int min3(int a, int b, int c) {
	int ret = min(min(a, b), c);
	return ret;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> score[0] >> score[1] >> score[2];

		dp[1][0] = max(dp[0][0], dp[0][1]) + score[0];
		dp[1][1] = max3(dp[0][0], dp[0][1], dp[0][2]) + score[1];
		dp[1][2] = max(dp[0][1], dp[0][2]) + score[2];

		dp[0][0] = dp[1][0];
		dp[0][1] = dp[1][1];
		dp[0][2] = dp[1][2];

		dp[3][0] = min(dp[2][0], dp[2][1]) + score[0];
		dp[3][1] = min3(dp[2][0], dp[2][1], dp[2][2]) + score[1];
		dp[3][2] = min(dp[2][1], dp[2][2]) + score[2];

		dp[2][0] = dp[3][0];
		dp[2][1] = dp[3][1];
		dp[2][2] = dp[3][2];
	}
	cout << max3(dp[0][0], dp[0][1], dp[0][2]) << ' ' << min3(dp[3][0], dp[3][1], dp[3][2]);
}
