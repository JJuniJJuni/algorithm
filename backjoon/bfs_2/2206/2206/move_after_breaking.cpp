#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int dist[1000][1000][2];
int maze[1000][1000];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };


int main() {
	int N, M;
	scanf_s("%d %d", &N, &M);
	queue<tuple<int, int, int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &maze[i][j]);
		}
	}
	dist[0][0][0] = 1;
	q.push(make_tuple(0, 0, 0));
	while (!q.empty()) {
		int x, y, z;
		tie(x, y, z) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (maze[nx][ny] == 0 && dist[nx][ny][z] == 0) {
				dist[nx][ny][z] = dist[x][y][z] + 1;
				q.push(make_tuple(nx, ny, z));
			}
			// 0 or 1개를 사용하여 온 최소 거리의 경우의 수로 + 1 (두가지 경우의 수의 값이 저장)

			if (z == 0 && maze[nx][ny] == 1 && dist[nx][ny][z + 1] == 0) {
				dist[nx][ny][z + 1] = dist[x][y][z] + 1;
				q.push(make_tuple(nx, ny, z + 1));
			}
			// 만약 부시지 않았을 경우에만 (z + 1)에 저장
		}
	}
	if (dist[N - 1][M - 1][0] && dist[N - 1][M - 1][1]) {
		printf("%d\n", min(dist[N - 1][M - 1][0], dist[N - 1][M - 1][1]));
	}
	else if (dist[N - 1][M - 1][0]) {
		printf("%d\n", dist[N - 1][M - 1][0]);
	}
	else if (dist[N - 1][M - 1][1]) {
		printf("%d\n", dist[N - 1][M - 1][1]);
	}
	else {
		printf("-1\n");
	}
	return 0;
}