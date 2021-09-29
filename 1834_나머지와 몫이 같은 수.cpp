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

long long N;

int main()
{

	cin >> N;
	cout << (N + 1)*(N)*(N - 1) / 2;

}

/*int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n;

	cin >> n;

	long long sum=0;

	for (int i = 1; i < n; i++) {
		sum += n * i + i;
	}

	cout << sum;
}*/

