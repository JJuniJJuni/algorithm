#include <iostream>
using namespace std;
const long long mod = 1000000000;
long long dist[101][10];


int main() {
	int n;
	scanf_s("%d", &n);

	for (int l = 1; l < 10; l++) {
		dist[1][l] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int l = 0; l < 10; l++) {
			dist[i][l] = 0;
			if(l - 1 >= 0) {
				dist[i][l] += dist[i - 1][l - 1];
			}
			if(l + 1 <= 9) {
				dist[i][l] += dist[i - 1][l + 1];
			}
			dist[i][l] %= mod;
		}
	}
	long long ans = 0;
	for (int l = 0; l < 10; l++) {
		ans += dist[n][l];
	}
	ans %= mod;
	printf("%d", ans);
}