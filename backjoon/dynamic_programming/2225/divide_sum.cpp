#include <iostream>
int dist[201][201];
const int mod = 1000000000;


int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i <= n; i++) {
		dist[1][i] = 1;
	}
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			for (int l = 0; l <= j; l++) {
				dist[i][j] += dist[i - 1][j - l];
				dist[i][j] %= mod;
			}
		}
	}
	// ���� N�� ������ 1���� 200��������, j = 0���� �����ؾ�����, j - l�� 0���� ������ �� �ִ�.
	printf("%d\n", dist[k][n]);
}