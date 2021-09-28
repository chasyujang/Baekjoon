#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;

int n;
int arr1[101];
int arr2[101];
int ans = 0;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> arr2[i];
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n, greater<int>());
	for (int i = 0; i < n; i++) {
		ans = ans + arr1[i] * arr2[i];
	}
	cout << ans;
}
