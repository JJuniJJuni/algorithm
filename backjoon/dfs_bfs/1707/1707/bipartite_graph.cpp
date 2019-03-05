#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;
int colors[20001];
vector<int> numbers[20001];
vector<bool> answers;
int N, M;
bool dfs(int node, int color) {
	colors[node] = color;
	int length = numbers[node].size();
	for (int k = 0; k < length; k++) {
		int next = numbers[node][k];
		if (colors[next] == 0) {
			if (dfs(next, 3 - color) == false) {
				return false;
			}
		}
		else if (colors[next] == color) {
			return false;
		}
	}
	return true;
}
int main() {
	int T;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf_s("%d %d", &N, &M);
		for (int j = 1; j <= N; j++) {
			numbers[j].clear();
			colors[j] = 0;
		}
		int u, v;
		for (int j = 0; j < M; j++) {
			scanf_s("%d %d", &u, &v);
			numbers[u].push_back(v);
			numbers[v].push_back(u);
		}
		bool ok = true;
		for (int j = 1; j <= N; j++) {
			if (colors[j] == 0) {
				if (!dfs(j, 1)) {
					ok = false;
				}
			}
		}
		answers.push_back(ok);
	}
	int a_length = answers.size();
	for (int i = 0; i < a_length; i++) {
		if (answers[i]) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}