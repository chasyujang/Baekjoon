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

/*int fibo(int a) {
	if (a == 1) return 1;
	if (a == 0) return 0;
	return fibo(a - 1) + fibo(a - 2);
}*/

long long fibo(long long a) {
	long long arr[3] = { 0,1,1 };
	for (int i = 2; i < a; i++) {
		arr[(i + 1) % 3] = arr[i % 3] + arr[(i - 1) % 3];
	}
	return arr[a % 3];
}

int main() {
	cout << "문제의 정답";
}