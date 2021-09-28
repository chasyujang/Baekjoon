#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char arr[51][51];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	char sav;
	int big;
	int ans = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int I = i;
			int J = j;
			sav = arr[i][j];
			while (1) {
				I++, J++;
				if (I >= n || J >= m) break;
				if (arr[I][J] == sav && arr[i][J] == sav && arr[I][j] == sav) {
					big = (I - i + 1)*(I - i + 1);
					if (big > ans) ans = big;
				}

			}
		}
	}
	cout << ans;
}