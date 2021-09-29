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
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, m, k;
	set<int> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		s.insert(k);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> k;
		if (s.find(k) == s.end()) {
			cout << 0 << '\n';
		}
		else cout << 1 << '\n';
	}
}