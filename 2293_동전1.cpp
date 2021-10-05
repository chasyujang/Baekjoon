#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;
int cache[10001];
int coin[101];
int n, k;

int main(void) {
	for (int i = 0; i < 10001; i++)
		cache[i] = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> coin[i];

	cache[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if ((j - coin[i]) >= 0) cache[j] += cache[j - coin[i]];
		}
	}

	cout << cache[k] << endl;

}