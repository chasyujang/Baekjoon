#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>
#include<stdio.h>

using namespace std;

int n;
int a, b;
int ans = 1;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == ans) ans = b;
		else if (b == ans) ans = a;
	}
	cout << ans;
}


