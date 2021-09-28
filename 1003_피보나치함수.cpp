#include <iostream>

#include <cstring> //memset

using namespace std;



int N; //�־��� ����

int save = 2; //�̹� ���� ���� �ٽ� ������ �ʴ´�

int cache[2][41]; //�޸������̼�



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

	//�Ǻ���ġ������ ���ؼ��� �տ� �ΰ��� ���ڰ� �ʿ��ϹǷ�

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