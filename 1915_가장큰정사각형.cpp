#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int n, m;

int board2[1001][1001];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			board2[i][j] = c - '0';
		}
	}


	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (board2[i][j] == 1) {
				board2[i][j] = min(board2[i - 1][j - 1], min(board2[i][j - 1], board2[i - 1][j])) + 1;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board2[i][j] > ans) ans = board2[i][j];
		}
	}
	cout << (ans)*(ans);
}