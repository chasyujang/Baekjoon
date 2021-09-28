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
char map[51][51];
char smap[51][51];
int ans = 123456789;
int cnt = 0;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			smap[i][j] = map[i][j];
		}
	}

	for (int I = 0; I < n - 7; I++) {
		for (int J = 0; J < m - 7; J++) {


			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					map[i][j] = smap[i][j];
				}
			}
			for (int i = I; i < I + 8; i++) {
				for (int j = J; j < J + 8; j++) {
					if (j + 1 < J + 8 && map[i][j] == map[i][j + 1]) {
						if (map[i][j + 1] == 'B') map[i][j + 1] = 'W';
						else if (map[i][j + 1] == 'W')map[i][j + 1] = 'B';
						cnt++;
					}
					if (i + 1 < I + 8 && map[i][j] == map[i + 1][j]) {
						if (map[i + 1][j] == 'B') map[i + 1][j] = 'W';
						else if (map[i + 1][j] == 'W') map[i + 1][j] = 'B';
						cnt++;
					}
				}

			}
			if (cnt < ans) ans = cnt;
			if (64 - cnt < ans) ans = 64 - cnt;
			cnt = 0;
		}
	}
	cout << ans;
}