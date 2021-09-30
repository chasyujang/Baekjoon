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
int arr[1000000];
int main() {
	int m, n;
	cin >> m >> n;
	arr[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 1) continue;
		for (int j = i * 2; j <= n; j += i) {
			arr[j] = 1;
		}
	}

	for (int i = m; i <= n; i++) {
		if (arr[i] == 0) cout << i << '\n';
	}


}




