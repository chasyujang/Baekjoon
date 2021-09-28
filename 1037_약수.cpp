#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());
	int ret = a[0] * a[n - 1];
	cout << ret;
}