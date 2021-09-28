#include<iostream>
#include<string>
#include<string.h>
#include<functional>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

string board[1005];
int n;

int str_cmp(const string& A, const string& B) {
	if (A.size() != B.size()) return A.size() < B.size(); // 1. 사이즈 비교

	int Asum = 0;
	int Bsum = 0;

	for (int i = 0; i < A.size(); i++) {
		if ('1' <= A[i] && A[i] <= '9') Asum = Asum + A[i] - '0';
		if ('1' <= B[i] && B[i] <= '9') Bsum = Bsum + B[i] - '0';
	}
	if (Asum != Bsum) return Asum < Bsum; //2. 숫자합

	return A < B; // 3. 사전순
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	sort(board, board + n, str_cmp);

	for (int i = 0; i < n; i++) {
		cout << board[i] << endl;
	}
}
