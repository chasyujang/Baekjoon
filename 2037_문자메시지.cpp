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



int main() {

	int p, w;
	cin >> p >> w;

	string s;
	cin.ignore(256, '\n');
	getline(cin, s);

	int sum = 0;
	int temp = 55555;


	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			sum += p;
			temp = 1;
		}

		if ('A' <= s[i] && s[i] <= 'C') {
			if (temp == 2) {
				sum += w;
				sum += p * (int(s[i] - 'A') + 1);
			}
			else {
				sum += p * (int(s[i] - 'A') + 1);
				temp = 2;
			}
		}

		if ('D' <= s[i] && s[i] <= 'F') {
			if (temp == 3) {
				sum += w;
				sum += p * (int(s[i] - 'D') + 1);
			}
			else {
				sum += p * (int(s[i] - 'D') + 1);
				temp = 3;
			}
		}

		if ('G' <= s[i] && s[i] <= 'I') {
			if (temp == 4) {
				sum += w;
				sum += p * (int(s[i] - 'G') + 1);
			}
			else {
				sum += p * (int(s[i] - 'G') + 1);
				temp = 4;
			}
		}

		if ('J' <= s[i] && s[i] <= 'L') {
			if (temp == 5) {
				sum += w;
				sum += p * (int(s[i] - 'J') + 1);
			}
			else {
				sum += p * (int(s[i] - 'J') + 1);
				temp = 5;
			}
		}

		if ('M' <= s[i] && s[i] <= 'O') {
			if (temp == 6) {
				sum += w;
				sum += p * (int(s[i] - 'M') + 1);
			}
			else {
				sum += p * (int(s[i] - 'M') + 1);
				temp = 6;
			}
		}

		if ('P' <= s[i] && s[i] <= 'S') {
			if (temp == 7) {
				sum += w;
				sum += p * (int(s[i] - 'P') + 1);
			}
			else {
				sum += p * (int(s[i] - 'P') + 1);
				temp = 7;
			}
		}

		if ('T' <= s[i] && s[i] <= 'V') {
			if (temp == 8) {
				sum += w;
				sum += p * (int(s[i] - 'T') + 1);
			}
			else {
				sum += p * (int(s[i] - 'T') + 1);
				temp = 8;
			}
		}

		if ('W' <= s[i] && s[i] <= 'Z') {
			if (temp == 9) {
				sum += w;
				sum += p * (int(s[i] - 'W') + 1);
			}
			else {
				sum += p * (int(s[i] - 'W') + 1);
				temp = 9;
			}
		}
	}

	cout << sum;
}