#include <iostream>

#include <string>

#include <algorithm>

#include <vector>

#include <stdio.h>

using namespace std;



int main() {

	int C, t;

	int ans[26] = { 0 }, max = 0;

	string s;

	vector<int> input;



	while (cin >> s) {



		for (int i = 0; i < s.length(); i++)

		{

			ans[s[i] - 'a']++;

		}

		s = "";

	}



	for (int i = 0; i < 26; i++)

	{



		if (max < ans[i])max = ans[i];

	}



	for (int i = 0; i < 26; i++) {

		if (ans[i] == max)cout << (char)('a' + i);

	}

}


