#include<string>
#include<string.h>
#include<iostream>

using namespace std;

int n, m;
int ans;

int main() {
	cin >> n >> m;
	ans = (n - 1) + n * (m - 1);
	cout << ans;

}