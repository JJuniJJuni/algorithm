#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector <int> answers;
int islands[51][51];
int group[51][51];
int w, h;
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
void bfs(int row, int col, int count) {
	queue<pair<int, int>> q;
	q.push(make_pair(row, col));
	group[row][col] = count;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny < w && ny >= 0 && nx < h) {
				if (islands[nx][ny] == 1 && group[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					group[nx][ny] = count;
				}
			}
		}
	}
}
int main() {
	while (true) {
		scanf_s("%d %d", &w, &h);
		if (w == 0 && h == 0) break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				scanf_s("%d", &islands[i][j]);
				group[i][j] = 0;
			}
		}
		int cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (islands[i][j] == 1 && group[i][j] == 0) {
					bfs(i, j, ++cnt);
				}
			}
		}
		answers.push_back(cnt);
	}
	int length = answers.size();
	for (int i = 0; i < length; i++) {
		printf("%d\n", answers[i]);
	}
}