#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int N;
int villages[25][25];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int group[25][25];
void bfs(int row, int col, int count) {
	queue<pair<int, int>> q;
	q.push(make_pair(row, col));
	group[row][col] = count;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
				if (villages[nx][ny] == 1 && group[nx][ny] == 0) {
					q.push(make_pair(nx, ny));
					group[nx][ny] = count;
				}
			}
		}
	}
}
int main() {
	scanf_s("%d", &N);
	int number;
	for (int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			scanf_s("%1d", &number);
			villages[i][j] = number;
		}
	}
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (villages[i][j] == 1 && group[i][j] == 0) {
				cnt += 1;
				bfs(i, j, cnt);
			}
		}
	}
	printf("%d\n", cnt);
	int *answers = new int[cnt];
	for (int i = 0; i < cnt; i++) {
		answers[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (group[i][j]) {
				answers[group[i][j] - 1] += 1;
			}
		}
	}
	sort(answers, answers + cnt);
	for (int i = 0; i < cnt; i++) {
		printf("%d\n", answers[i]);
	}
}