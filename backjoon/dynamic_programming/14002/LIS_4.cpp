#include <iostream>
using namespace std;
int dist[1001];
int A[1001];
int V[1001];
void go(int idx) {
	if (idx == 0) {
		return;
	}
	go(V[idx]);
	printf("%d ", A[idx]);
}



int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &A[i]);
	}
	dist[1] = 1;
	for (int i = 2; i <= n; i++) {
		dist[i] = 1;
		V[i] = 0;
		for (int j = 1; j < i; j++) {
			if (A[i] > A[j] && dist[j] + 1 > dist[i]) {
				V[i] = j;
				dist[i] = dist[j] + 1;
			}
		}
	}
	int ans = 0;
	int last_idx = 0;
	for (int i = 1; i <= n; i++) {
		if (dist[i] > ans) {
			ans = dist[i];
			last_idx = i;
		}
	}
	printf("%d\n", ans);
	go(last_idx);
}