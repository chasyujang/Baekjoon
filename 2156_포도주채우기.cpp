#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int board[10005];
int dp[10005];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> board[i];
	}
	dp[1] = board[1];
	dp[2] = board[1] + board[2];
	dp[3] = max(board[1] + board[2], max(board[1] + board[3], board[2] + board[3]));


	for (int i = 4; i <= n; i++) {
		dp[i] = max(dp[i - 2] + board[i], max(dp[i - 1], dp[i - 3] + board[i - 1] + board[i]));
	}
	cout << dp[n];

}


