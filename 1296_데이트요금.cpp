#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

string a, b, last;
int n;
int l1 = 0, o1 = 0, v1 = 0, e1 = 0;
int l2 = 0, o2 = 0, v2 = 0, e2 = 0;

int max1 = -1;

typedef struct abc {
	int score;
	string b;
};

int main() {

	vector<abc> gf;

	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 'L') l1++;
		if (a[i] == 'O') o1++;
		if (a[i] == 'V') v1++;
		if (a[i] == 'E') e1++;
	}
	cin >> n;
	while (n--) {
		cin >> b;
		for (int i = 0; i < b.size(); i++) {
			if (b[i] == 'L') l2++;
			if (b[i] == 'O') o2++;
			if (b[i] == 'V') v2++;
			if (b[i] == 'E') e2++;
		}
		int l = l1 + l2;
		int o = o1 + o2;
		int v = v1 + v2;
		int e = e1 + e2;

		int score = ((l + o)*(l + v)*(l + e)*(o + v)*(o + e)*(v + e)) % 100;
		if (max1 < score) max1 = score;
		gf.push_back({ score,b });
		l2 = 0;
		o2 = 0;
		v2 = 0;
		e2 = 0;
	}
	vector<string> ans;

	for (int i = 0; i < gf.size(); i++) {
		if (gf[i].score == max1) ans.push_back(gf[i].b);
	}
	sort(ans.begin(), ans.end());

	cout << ans[0];
}