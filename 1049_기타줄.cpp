#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int** board;
int n, m;
int price = 1000;
int total = 0;
int sixprice = 6000;

int main() {
	cin >> n >> m;
	board = new int*[m];
	for (int i = 0; i < m; i++) {
		board[i] = new int[2];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> board[i][j];
		}
	}

	while (n >= 6) {
		for (int i = 0; i < m; i++) {
			if (board[i][0] < price) {
				price = board[i][0];
			}
			if (board[i][1] * 6 < price) {
				price = 6 * board[i][1];
			}
		}
		total = total + price;
		n = n - 6;
	}
	price = 1000;
	while (n != 0) {
		for (int i = 0; i < m; i++) {
			if (board[i][1] < price) {
				price = board[i][1];
			}
		}
		sixprice = price * (n % 6);
		for (int i = 0; i < m; i++) {
			if (board[i][0] < sixprice) {
				sixprice = board[i][0];
			}
		}
		if (sixprice < price*(n % 6)) {
			total = total + sixprice;
			cout << total;
			return 0;
		}

		total = total + price;
		n = n - 1;

	}
	cout << total;
	return 0;
}