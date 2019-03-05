#include <iostream>
#include <memory.h>
#include <queue>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int water[50][50];
int dist[50][50];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};


int main() {
	memset(water, -1, sizeof(water));
	memset(dist, -1, sizeof(dist));
	int N, M;
	vector<string> ground;
	queue<pair<int, int>> water_q;
	queue<pair<int, int>> dist_q;
	scanf_s("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		char input_string[50];
		scanf_s("%s", input_string, sizeof(input_string));
		ground.push_back(input_string);
	}

	int ex, ey;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (ground[i][j] == '*') {
				water[i][j] = 0;
				water_q.push(make_pair(i, j));
			}
			if (ground[i][j] == 'S') {
				dist[i][j] = 0;
				dist_q.push(make_pair(i, j));
			}
			if (ground[i][j] == 'D') {
				ex = i;
				ey = j;
			}
		}
	}

	while (!water_q.empty()) {
		int x = water_q.front().first;
		int y = water_q.front().second;
		water_q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (water[nx][ny] == -1 && ground[nx][ny] != 'D' && ground[nx][ny] != 'S' && ground[nx][ny] != 'X') {
					water[nx][ny] = water[x][y] + 1;
					water_q.push(make_pair(nx, ny));
				}
			}
		}
	}
	while (!dist_q.empty()) {
		int x = dist_q.front().first;
		int y = dist_q.front().second;
		dist_q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (dist[nx][ny] == -1 && ground[nx][ny] != 'X') {
					if (water[nx][ny] == -1 || (dist[x][y] + 1) < water[nx][ny]) {
						dist[nx][ny] = dist[x][y] + 1;
						dist_q.push(make_pair(nx, ny));
					}
				}
			}
		}
	}

	if (dist[ex][ey] == -1) {
		printf("KAKTUS\n");
	}
	else {
		printf("%d\n", dist[ex][ey]);
	}
}