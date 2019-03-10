#include <iostream>
using namespace std;
int dist[1001];
int A[1001];


int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &A[i]);
	}
	dist[1] = A[1];
	for (int i = 2; i <= n; i++) {
		dist[i] = A[i];
		for (int j = 1; j < i; j++) {
			if (A[i] > A[j] && dist[j] + A[i] > dist[i]) {
				dist[i] = dist[j] + A[i];
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (dist[i] > ans) {
			ans = dist[i];
		}
	}
	printf("%d\n", ans);
}