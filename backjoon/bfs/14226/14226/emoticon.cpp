#include <iostream>
#include <memory.h>
#include <algorithm>
#include <queue>
using namespace std;
int dist[1001][1001];


int main() {
	int S;
	scanf_s("%d", &S);
	memset(dist, -1, sizeof(dist));
	queue<pair<int, int>> q;
	dist[1][0] = 0;
	q.push(make_pair(1, 0));
	while (!q.empty()) {
		int s = q.front().first;
		int c = q.front().second;
		q.pop();
		if (dist[s][s] == -1) {
			dist[s][s] = dist[s][c] + 1;
			q.push(make_pair(s, s));
		}
		if (s + c <= S && dist[s + c][c] == -1) {
			dist[s + c][c] = dist[s][c] + 1;
			q.push(make_pair(s + c, c));
		}
		
		if (s - 1 > 0 && dist[s - 1][c] == -1) {
			dist[s - 1][c] = dist[s][c] + 1;
			q.push(make_pair(s - 1, c));
		}
	}
	int ans = -1;
	for (int i = 0; i <= 1000; i++) {
		if(dist[S][i] != -1){
			if (ans == -1 || dist[S][i] < ans) {
				ans = dist[S][i];
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}