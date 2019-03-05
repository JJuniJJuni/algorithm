#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool relations[2001][2001];
vector<int> rel_graph[2001];
vector <pair<int, int >> edges;
int main() {
	int N, M;
	scanf_s("%d %d", &N, &M);
	int from, to;
	for (int i = 0; i < M; i++) {
		scanf_s("%d %d", &from, &to);
		edges.push_back({ from, to });
		edges.push_back({ to, from });
		rel_graph[from].push_back(to);
		rel_graph[to].push_back(from);
		relations[from][to] = true;
		relations[to][from] = true;
	}
	M *= 2;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			int A = edges[i].first;
			int B = edges[i].second;
			int C = edges[j].first;
			int D = edges[j].second;

			if (A == B || A == C || A == D || B == C || B == D || C == D) continue;
			if (!relations[B][C]) continue;
			for (int E: rel_graph[D]) {
				if (E == A || E == B || E == C || E == D) {
					continue;
				}
				printf("1\n");
				return 0;
			}
		}
	}
	printf("0\n");
}