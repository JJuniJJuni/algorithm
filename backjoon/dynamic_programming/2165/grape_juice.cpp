#include <iostream>
#include <algorithm>
using namespace std;
//long long dist[10001][3];
long long dist[10001];
int juice[10001];


int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &juice[i]);
	}
	dist[1] = juice[1];
	dist[2] = juice[1] + juice[2];
	for (int i = 3; i <= n; i++) {
		//dist[i][0] = max(dist[i - 1][0], max(dist[i - 1][1], dist[i - 1][2]));
		//dist[i][1] = dist[i - 1][0] + juice[i];
		//dist[i][2] = dist[i - 1][1] + juice[i];
		dist[i] = max(dist[i - 3] + juice[i - 1] + juice[i], max(dist[i - 1], dist[i - 2] + juice[i]));
	}
	//printf("%lld", max(dist[n][0], max(dist[n][1], dist[n][2])));
	printf("%lld", dist[n]);
}