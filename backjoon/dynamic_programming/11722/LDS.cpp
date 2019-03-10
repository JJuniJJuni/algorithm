#include <iostream>
using namespace std;
int dist[1001];
int A[1001];


int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &A[i]);
	}
	dist[1] = 1;
	for (int i = 2; i <= n; i++) {
		dist[i] = 1;
		for (int j = 1; j < i; j++) {
			if (A[i] < A[j] && dist[j] + 1 > dist[i]) {
				dist[i] = dist[j] + 1;
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