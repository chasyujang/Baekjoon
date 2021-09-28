#include <iostream>

#include <cstring> //memset

using namespace std;



int N; //주어진 숫자

int save = 2; //이미 구한 수는 다시 구하지 않는다

int cache[2][41]; //메모이제이션



void fibonacci(int n)

{

	if (N >= save)

	{

		for (int i = save; i <= N; i++)

		{

			cache[0][i] = cache[0][i - 1] + cache[0][i - 2];

			cache[1][i] = cache[1][i - 1] + cache[1][i - 2];

		}

		save = N;

	}

}



void initialize(void)

{

	memset(cache, 0, sizeof(cache));

	//피보나치수열을 위해서는 앞에 두개의 숫자가 필요하므로

	cache[0][0] = 1;

	cache[1][1] = 1;

}



int main(void)

{

	int T; //test_case

	cin >> T;

	initialize();

	for (int i = 0; i < T; i++)

	{

		cin >> N;

		if (N > 40 || N < 0)

			exit(-1);

		fibonacci(N);

		cout << cache[0][N] << " " << cache[1][N] << endl;

	}

	return 0;

}