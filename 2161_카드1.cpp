#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

int board[1005];
int n;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		board[i] = i;
	}

	int cnt = 1;
	int sav = 0;
	while (cnt <= n) {
		cout << board[cnt] << ' ';
		cnt++;

		sav = board[cnt];
		for (int i = cnt; i <= n - 1; i++) {
			board[i] = board[i + 1];
		}
		board[n] = sav;
	}
}