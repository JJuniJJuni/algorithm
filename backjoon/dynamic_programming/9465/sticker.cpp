#include <iostream>
#include <algorithm>
using namespace std;
long long dist[100001][3];
int score[2][100000];

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int n;
		scanf("%d", &n);
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < n; k++) {
				scanf("%d", &score[j][k]);
			}
		}
		dist[1][0] = 0;
		dist[1][1] = score[0][0];
		dist[1][2] = score[1][0];
		for (int j = 2; j <= 100000; j++) {
			dist[j][0] = max(dist[j - 1][0], max(dist[j - 1][1], dist[j - 1][2]));
			dist[j][1] = max(dist[j - 1][0], dist[j - 1][2]) + score[0][j - 1];
			dist[j][2] = max(dist[j - 1][0], dist[j - 1][1]) + score[1][j - 1];
		}
		printf("%lld", max(dist[n][0], max(dist[n][1], dist[n][2])));
	}
}