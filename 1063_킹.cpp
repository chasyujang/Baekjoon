#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

char a1[2], b1[2];
int a[2], b[2];
int n;

int dy[] = { 0,0,+1,-1,-1,-1,+1,+1 };
int dx[] = { +1,-1,0,0,+1,-1,+1,-1 };

int convert(string s) {
	if (s == "R") return 0;
	if (s == "L") return 1;
	if (s == "B") return 2;
	if (s == "T") return 3;
	if (s == "RT") return 4;
	if (s == "LT") return 5;
	if (s == "RB") return 6;
	if (s == "LB") return 7;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 2; i++) {
		cin >> a1[i];
	}
	a[1] = 7 - (a1[1] - '1');
	a[0] = a1[0] - 'A';

	int king_y = a[1];
	int king_x = a[0];

	for (int i = 0; i < 2; i++) {
		cin >> b1[i];
	}
	b[1] = 7 - (b1[1] - '1');
	b[0] = b1[0] - 'A';

	int rock_y = b[1];
	int rock_x = b[0];

	cin >> n;

	while (n--) {
		string s;
		cin >> s;
		int dr = convert(s);
		int new_king_x = king_x + dx[dr];
		int new_king_y = king_y + dy[dr];
		int new_rock_x;
		int new_rock_y;
		if (new_king_x > 7 || new_king_x < 0 || new_king_y>7 || new_king_y < 0) continue;
		if (new_king_x == rock_x && new_king_y == rock_y) {
			new_rock_x = rock_x + dx[dr];
			new_rock_y = rock_y + dy[dr];
			if (new_rock_x > 7 || new_rock_x < 0 || new_rock_y>7 || new_rock_y < 0) continue;
			rock_x = new_rock_x;
			rock_y = new_rock_y;
		}
		king_x = new_king_x;
		king_y = new_king_y;


	}

	cout << (char)(king_x + 'A') << (char)(7 - king_y + '1') << '\n';
	cout << (char)(rock_x + 'A') << (char)(7 - rock_y + '1');

	return 0;

}