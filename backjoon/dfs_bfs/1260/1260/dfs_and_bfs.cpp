#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;
int N, M, S;
vector <int> answer[1001];
vector<int> numbers[1001];
bool check[1001];
void dfs(int node) {
	check[node] = true;
	printf("%d ", node);
	int length = numbers[node].size();
	for (int i = 0; i < length; i++) {
		int next = numbers[node][i];
		if (!check[next]) dfs(next);
	}
}
void bfs(int start) {
	memset(check, false, sizeof(check));
	queue<int> num_qu;
	num_qu.push(start);
	check[start] = true;
	while (!num_qu.empty()) {
		int node = num_qu.front();
		num_qu.pop();
		printf("%d ", node);
		int length = numbers[node].size();
		for (int i = 0; i < length; i++) {
			int next = numbers[node][i];
			if (!check[next]) {
				num_qu.push(next);
				check[next] = true;
			}
		}
	}
}
int main() {
	scanf_s("%d %d %d", &N, &M, &S);
	int from, to;
	for (int i = 0; i < M; i++) {
		scanf_s("%d %d", &from, &to);
		numbers[to].push_back(from);
		numbers[from].push_back(to);
	}
	for (int i = 0; i < N; i++) {
		sort(numbers[i].begin(), numbers[i].end());
	}
	memset(check, false, sizeof(check));
	dfs(S);
	printf("\n");
	bfs(S);
	printf("\n");
}