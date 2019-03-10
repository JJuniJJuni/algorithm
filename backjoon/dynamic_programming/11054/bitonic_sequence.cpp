#include <iostream>
using namespace std;
int dist1[1001];
int dist2[1001];
int A[1001];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &A[i]);
	}
	dist1[1] = 1;
	dist2[n] = 1;
	for (int i = 2; i <= n; i++) {
		dist1[i] = 1;
		for (int j = 1; j < i; j++) {
			if (A[i] > A[j] && dist1[j] + 1 > dist1[i]) {
				dist1[i] = dist1[j] + 1;
			}
		}
	}

	for (int i = n - 1; i >= 1; i--) {
		dist2[i] = 1;
		for (int j = n; j > i; j--) {
			if (A[i] > A[j] && dist2[j] + 1 > dist2[i]) {
				dist2[i] = dist2[j] + 1;
			}
		}
	}
	// 감소하는 수열은 뒤에서부터 길이가 늘어나야 알맞게 됨. 즉, 오른쪽 기준에서 증가하는 수열이면 왼쪽 기준에서는 감소하는 수열
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (ans < (dist1[i] + dist2[i] - 1)) {
			ans = dist1[i] + dist2[i] - 1;
		}
	}
	printf("%d\n", ans);
}