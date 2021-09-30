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
char board[50][5][7];
int n1, n2;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int a = 0; a < 5; a++) {
			for (int b = 0; b < 7; b++) {
				cin >> board[i][a][b];
			}
		}
	}
	int cnt = 0;
	int ans = 123456789;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			for (int a = 0; a < 5; a++) {
				for (int b = 0; b < 7; b++) {
					if (board[i][a][b] != board[j][a][b]) {
						cnt++;
					}
				}
			}
			if (cnt < ans) {
				ans = cnt;
				n1 = i;
				n2 = j;
			}
			cnt = 0;
		}
	}
	cout << n2 + 1 << ' ' << n1 + 1;
}