#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<set>
#include<vector>
#include<algorithm>
#include<stack>
#include<sstream>

using namespace std;

int n;
int cnt;

int hansu(int x) {
	if (x == 1000) return 0;
	if (x < 100) return 1;
	int a = x % 10;
	int b = (x / 10) % 10;
	int c = (x / 10) / 10;
	return 2 * b == a + c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	while (1) {
		if (n == 0) break;
		cnt += hansu(n);
		n--;
	}
	cout << cnt;
}