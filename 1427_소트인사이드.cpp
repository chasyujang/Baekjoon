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

string word;
vector<int> v;

int main() {
	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		int a = (int)(word[i] - '0');
		v.push_back(a);
	}
	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < word.size(); i++) {
		cout << v[i];
	}
}