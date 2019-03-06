#include <iostream>
using namespace std;
const long long mod = 10007;
long long dist[1001][10];


int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < 10; i++) {
		dist[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				dist[i][j] += dist[i - 1][k];
			}
			dist[i][j] %= mod;
		}
	}
	long long ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += dist[n][i];
	}
	printf("%d\n", ans % mod);
	return 0;
}