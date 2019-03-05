#include <iostream>
#include <algorithm>
using namespace std;
int d[1000001];

int go(int n) {
	if (n == 1) {
		return 0;
	}
	if (d[n] > 0) {
		return d[n];
	}
	d[n] = go(n - 1) + 1;

	if (n % 2 == 0) {
		int temp = go(n / 2) + 1;
		if (d[n] > temp) {
			d[n] = temp;
		}
	}
	if (n % 3 == 0) {
		int temp = go(n / 3) + 1;
		if (d[n] > temp) {
			d[n] = temp;
		}
	}

	return d[n];
}

int main() {
	//d[1] = 0;
	int N;
	scanf_s("%d", &N);
	printf("%d\n", go(N));
	//for (int i = 2; i <= N; i++) {
	//	d[i] = d[i - 1] + 1;
	//	if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
	//		d[i] = d[i / 3] + 1;
	//	}
	//	if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
	//		d[i] = d[i / 2] + 1;
	//	}

	//}
	//printf("%d\n", d[N]);
	//return 0;
}