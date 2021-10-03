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
int board[301][301];
int k;
int a, b, x, y;
int sum = 0;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	cin >> k;
	while (k--) {
		cin >> a >> b >> x >> y;
		for (int i = a - 1; i < x; i++) {
			for (int j = b - 1; j < y; j++) {
				sum = sum + board[i][j];
			}
		}
		cout << sum << endl;
		sum = 0;
	}

}