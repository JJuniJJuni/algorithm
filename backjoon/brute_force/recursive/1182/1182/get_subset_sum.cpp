#include <iostream>
using namespace std;
int numbers[20];
int cnt = 0;
int N, S;
void go(int current, int idx) {
	if (idx == N) {
		if (current == S) {
			cnt += 1;
		}
		return;
	}
	go(current + numbers[idx], idx + 1);
	go(current, idx + 1);
}

int main() {
	scanf_s("%d %d", &N, &S);
	int number;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &number);
		numbers[i] = number;
	}
	go(0, 0);
	if (S == 0) cnt -= 1;
	printf("%d\n", cnt);
}
