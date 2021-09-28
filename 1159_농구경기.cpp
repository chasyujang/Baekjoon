#include<iostream>
#include<string>
#include<string.h>

using namespace std;

char s[151];
char c;


int n[27];
int sur = 0;

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> s;
		n[s[0] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (n[i] >= 5) {
			cout << (char)('a' + i);
			sur++;
		}
	}
	if (sur == 0) cout << "PREDAJA";
}