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

char arr[8][8];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];
			if ((i + j) % 2 == 0 && arr[i][j] == 'F') cnt++;
		}
	}

	cout << cnt;
}¤±