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

using namespace std;

int n;

struct s {
	string word;
	int len;
	int num;
}arr[20005];

bool cmp(const s &a, const s &b) {
	if (a.len != b.len) return a.len < b.len;
	return a.word < b.word;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string k;
		cin >> k;
		arr[i].word = k;
		arr[i].len = k.size();
	}

	sort(arr, arr + n, cmp);

	string sav;
	for (int i = 0; i < n; i++) {

		if (arr[i].word != sav)cout << arr[i].word << '\n';
		sav = arr[i].word;
	}
}