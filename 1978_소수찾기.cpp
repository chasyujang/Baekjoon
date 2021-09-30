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
int cnt = 0;
int ans = 0;
int main() {
	cin >> n;
	while (n--) {
		cnt = 0;
		cin >> m;
		for (int i = 1; i <= m; i++) {
			if (m%i == 0) {
				cnt++;
			}
		}
		if (cnt == 2) ans++;
	}
	cout << ans;
}