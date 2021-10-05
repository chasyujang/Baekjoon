#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int n, k;
int arr1[101];
int arr2[100001] = {};
int big;

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> arr1[i];
	}
	for (int i = 1; i <= n; i++) {
		arr2[arr1[i]] = 1;
	}
	sort(arr1, arr1 + n);
	for (int i = arr1[1] + 1; i <= k; i++) {
		if (arr2[i] == 1) continue;
		big = 123456789;
		for (int j = 1; j <= i / 2; j++) {
			if (arr2[j] == 0 || arr2[i - j] == 0) continue;
			if (arr2[i - j] + arr2[j] <= big) big = arr2[i - j] + arr2[j];
		}
		arr2[i] = big;
	}
	if (arr2[k] == 0 || arr2[k] == 123456789) cout << -1;
	else cout << arr2[k];
}