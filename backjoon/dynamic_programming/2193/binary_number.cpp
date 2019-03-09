#include <iostream>
using namespace std;
long long dist[91];


int main() {
	int n;
	scanf_s("%d", &n);
	dist[1] = 1;
	dist[2] = 1;
	for (int i = 3; i <= n; i++) {
		dist[i] = dist[i - 1] + dist[i - 2];
	}
	printf("%lld", dist[n]);
	return 0;
}