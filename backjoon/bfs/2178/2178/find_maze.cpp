#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int N, M;
int maze[100][100];
bool check[100][100];
int dist[100][100];
int dx[] = { 0, 1, 0, -1};
int dy[] = { -1, 0, 1, 0};
void bfs(int row, int col) {
	queue<pair<int, int>> q;
	q.push(make_pair(row, col));
	check[row][col] = true;
	dist[row][col] = 1;
	
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (check[nx][ny] == false && maze[nx][ny] == 1) {
					check[nx][ny] = true;
					q.push(make_pair(nx, ny));
					dist[nx][ny] = dist[x][y] + 1;
				}
			}
		}
	}
}
int main() {	
	scanf_s("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &maze[i][j]);
		}
	}
	bfs(0, 0);
	printf("%d\n", dist[N - 1][M - 1]);
}