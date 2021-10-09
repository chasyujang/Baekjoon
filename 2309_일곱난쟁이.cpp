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

int arr[9];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int sum = 0;

	for (int i = 0; i < 9; i++) {
		sum += arr[i];
	}
	int flag = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				arr[i] = arr[j] = 0;
				j = 9;
				flag = 1;

			}
			if (flag == 1) i = 9;
		}
	}

	sort(arr, arr + 9);

	for (int i = 2; i < 9; i++) {
		cout << arr[i] << '\n';
	}
}