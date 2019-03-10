#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int n;
	scanf("%d", &n);
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	vector<int> dist(n);
	dist[0] = A[0];
	for (int i = 1; i < n; i++) {
		dist[i] = max(dist[i - 1] + A[i], A[i]);
	}
	int ans = dist[0];  // 첫번째 원소가 음수일수도 있기 때문에 첫번째 값으로 초기화 시켜줘야한다.
	for (int i = 1; i < n; i++) {
		if (ans < dist[i]) {
			ans = dist[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}