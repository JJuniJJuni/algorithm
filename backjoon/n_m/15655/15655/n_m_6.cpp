#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int numbers[8];
int answer[8];
void go(int idx, int start, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << answer[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = start; i < n; i++) {
		answer[idx] = numbers[i];
		go(idx + 1, i + 1, n, m);
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	sort(numbers, numbers + N);
	go(0, 0, N, M);
	return 0;
}

