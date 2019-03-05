#include <iostream>
using namespace std;
int d[1001];

int main() {
	int N;
	scanf_s("%d", &N);
	d[1] = 1;
	d[2] = 2;
	for (int i = 3; i <= N; i++) {
		d[i] = d[i - 1] + d[i - 2];
		d[i] = d[i] % 10007;
	}
	printf("%d\n", d[N]);
}