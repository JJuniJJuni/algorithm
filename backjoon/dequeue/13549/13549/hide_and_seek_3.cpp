#include <iostream>
#include <deque>
#include <memory.h>
using namespace std;
const int MAX = 100000;
int main() {
	int N, K;
	int dist[MAX + 1];
	bool check[MAX + 1];
	scanf_s("%d %d", &N, &K);
	memset(check, false, sizeof(check));
	check[N] = true;
	dist[N] = 0;
	deque<int> d;
	d.push_front(N);
	while (!d.empty()) {
		int node = d.front();
		if (node == K) {
			break;
		}
		d.pop_front();
		if (node * 2 <= MAX && check[node * 2] == false) {
			d.push_front(node * 2);
			check[node * 2] = true;
			dist[node * 2] = dist[node];
		}
		
		if (node - 1 >= 0 && check[node - 1] == false) {
			d.push_back(node - 1);
			check[node - 1] = true;
			dist[node - 1] = dist[node] + 1;
		}

		if (node + 1 <= MAX && check[node + 1] == false) {
			d.push_back(node + 1);
			check[node + 1] = true;
			dist[node + 1] = dist[node] + 1;
		}
	}
	printf("%d\n", dist[K]);
}