#include <iostream>
#include <algorithm>
using namespace std;
int P[1001];
int dist[1001];


int main() {
	int N;
	scanf_s("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf_s("%d", &P[i]);
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (dist[i] == 0 || dist[i] > dist[i - j] + P[j]) {
				dist[i] = P[j] + dist[i - j];
			}
		}
	}
	printf("%d\n", dist[N]);
}