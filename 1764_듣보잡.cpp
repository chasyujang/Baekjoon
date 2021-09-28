#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main() {
	int n = 0;
	int m = 0;
	set<string> sets;
	string word;
	vector<string> v;
	cin >> n >> m;

	while (n--) {
		cin >> word;
		sets.insert(word);
	}

	while (m--) {
		cin >> word;
		auto it = sets.find(word);
		if (it != sets.end()) v.push_back(word);
	}

	sort(v.begin(), v.end());

	cout << v.size() << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}