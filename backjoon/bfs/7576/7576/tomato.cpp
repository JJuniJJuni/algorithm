#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int N, M;
int ground[1000][1000];
int dist[1000][1000];
int dx[] = {0, 1, 0, -1};
int dy[] = { -1, 0, 1, 0 };
int main() {
	scanf_s("%d %d", &M, &N);
	queue<pair<int, int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%d", &ground[i][j]);
			dist[i][j] = -1;
			if (ground[i][j] == 1) {
				q.push(make_pair(i, j));
				dist[i][j] = 0;
			}
		}
	}
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (dist[nx][ny] == -1 && ground[nx][ny] == 0) {
					dist[nx][ny] = dist[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (ans < dist[i][j]) {
				ans = dist[i][j];
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (dist[i][j] == -1 && ground[i][j] == 0) {
				ans = -1;
			}
		}
	}
	printf("%d\n", ans);
}