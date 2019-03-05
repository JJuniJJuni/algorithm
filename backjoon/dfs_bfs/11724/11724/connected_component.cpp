#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int check[1001];
int cnt;
int N, M;
vector<int> edges[1001 * 1000 / 2];
void dfs(int start) {
	check[start] = true;
	int length = edges[start].size();
	for (int i = 0; i < length; i++) {
		int next = edges[start][i];
		if (!check[next]) dfs(next);
	}
}
int main() {
	scanf_s("%d %d", &N, &M);
	int v, u;
	for (int i = 0; i < M; i++) {
		scanf_s("%d %d", &u, &v);
		edges[v].push_back(u);
		edges[u].push_back(v);
	}
	for (int i = 1; i <= N; i++) {
		sort(edges[i].begin(), edges[i].end());
	}
	for (int i = 1; i <= N; i++) {
		if (!check[i]) {
			cnt += 1;
			dfs(i);
		}
	}
	printf("%d\n", cnt);
}