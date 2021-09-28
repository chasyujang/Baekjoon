#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int board[105];
int t;
int a, b;
int A;




int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> board[i];
	}
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a == 1) {
			for (int i = b; i <= n; i = i + b) {
				if (board[i] == 1) board[i] = 0;
				else if (board[i] == 0) board[i] = 1;
			}
		}
		else if (a == 2) {
			if (board[b] == 1) board[b] = 0;
			else if (board[b] == 0)board[b] = 1;
			A = 1;
			while (1) {

				if ((b - A<1 || b + A>n || board[b + A] != board[b - A])) break;

				if (board[b + A] == 1) board[b + A] = 0;
				else if (board[b + A] == 0)board[b + A] = 1;
				if (board[b - A] == 1) board[b - A] = 0;
				else if (board[b - A] == 0)board[b - A] = 1;
				A++;

			}
		}
	}

	for (int i = 1; i <= n; i++) {

		cout << board[i] << ' ';
		if (i % 20 == 0) cout << endl;
	}

}