#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

int n, cur;
int len = 1;
int ans = 0;

int main() {
	cin >> n;
	cur = n;
	while (1) {
		cur = cur / 10;
		if (cur == 0) break;
		len++;
	}
	for (int i = 1; i < len; i++) {
		ans = ans + 9 * pow(10, i - 1)*i;
	}
	ans = ans + (n + 1 - pow(10, len - 1))*len;
	cout << ans;
}

