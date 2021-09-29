#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<algorithm>

using namespace std;

int a;
int k[1000001] = {};
int sum[10000001] = {};
int max1;
int main() {
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> k[i];
	}


	for (int i = 1; i <= a; i++) {
		if (sum[i - 1] + k[i] > k[i]) {
			sum[i] = sum[i - 1] + k[i];
		}
		else {
			sum[i] = k[i];
		}
	}
	max1 = k[1];
	for (int i = 2; i <= a; i++) {
		if (max1 < sum[i]) {
			max1 = sum[i];
		}
	}
	cout << max1;
}