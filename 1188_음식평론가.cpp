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


int main() {
	cin >> n >> m;
	int crazy = n * m;
	int cut = crazy / n - 1;
	int cnt = 0;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			if (n*i == m * j) cnt++;
		}
	}
	cout << cut - cnt;
}