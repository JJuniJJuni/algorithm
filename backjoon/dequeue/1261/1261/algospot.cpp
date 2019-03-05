#include <iostream>
#include <deque>
#include <algorithm>
#include <memory.h>
using namespace std;
int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };
int main() {
	int dist[100][100];
	int maze[100][100];
	int N, M;
	deque<pair<int, int>> d;
	scanf_s("%d %d", &M, &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			dist[i][j] = -1;
			scanf_s("%1d", &maze[i][j]);
		}
	}
	dist[0][0] = 0;
	d.push_front(make_pair(0, 0));
	while (!d.empty()) {
		int x = d.front().first;
		int y = d.front().second;
		d.pop_front();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (dist[nx][ny] == -1 && maze[nx][ny] == 0) {
					dist[nx][ny] = dist[x][y];
					d.push_front(make_pair(nx, ny));
				}

				if (dist[nx][ny] == -1 && maze[nx][ny] == 1) {
					dist[nx][ny] = dist[x][y] + 1;
					d.push_back(make_pair(nx, ny));
				}
			}
		}
	}
	printf("%d\n", dist[N - 1][M - 1]);
}