#include<iostream>
#include<string>
#include<queue>



using namespace std;



int dx[] = { -1,+1,0,0 };
int dy[] = { 0,0,-1,+1 };

struct point {
	int y, x;
};

int main() {
	int T;
	cin >> T;

	while (T--) {
		int board[51][51] = {};
		bool check[51][51] = {};
		int m, n, k;
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}

		int cnt = 0;
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < m; i++) {
				if (!board[j][i] || check[j][i]) continue;
				queue<point> q;
				q.push({ j,i });
				check[j][i] = true;
				board[j][i] = cnt;
				while (!q.empty()) {
					point f = q.front();
					q.pop();

					for (int dir = 0; dir < 4; dir++) {
						int nx = f.x + dx[dir];
						int ny = f.y + dy[dir];

						if (nx < 0 || ny < 0 || ny >= n || nx >= m) continue;
						if (!board[ny][nx] || check[ny][nx]) continue;
						check[ny][nx] = true;
						board[ny][nx] = cnt;
						q.push({ ny, nx });
					}
				}
				cnt++;
			}
		}
		cout << cnt << endl;
	}

}

