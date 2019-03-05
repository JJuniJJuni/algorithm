#include <iostream>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;
const int MAX = 100000;
int main() {
	int N, K, node;
	int ans = 0;
	bool check[MAX + 1];
	int dist[MAX + 1];
	queue<int> q;
	scanf_s("%d %d", &N, &K);
	q.push(N);
	check[N] = true;
	memset(check, false, sizeof(check));
	dist[N] = 0;

	while (!q.empty()) {
		node = q.front();
		if (node == K) {
			break;
		}
		q.pop();
		if (node + 1 <= MAX && check[node + 1] == false) {
			q.push(node + 1);
			check[node + 1] = true;
			dist[node + 1] = dist[node] + 1;
		}
		if (node - 1 >= 0 && check[node - 1] == false) {
			q.push(node - 1);
			check[node - 1] = true;
			dist[node - 1] = dist[node] + 1;
		}
		if (node * 2 <= MAX && check[2 * node] == false) {
			q.push(2 * node);
			check[2 * node] = true;
			dist[2 * node] = dist[node] + 1;
		}
	}
	printf("%d\n", dist[node]);
}