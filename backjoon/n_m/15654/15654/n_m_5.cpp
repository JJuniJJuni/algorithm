#include <iostream>
#include <algorithm>
using namespace std;
int answer[8];
int numbers[8];
bool check[8];
void go(int idx, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << answer[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!check[i]) {
			check[i] = true;
			answer[idx] = numbers[i];
			go(idx + 1, n, m);
			check[i] = false;
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	sort(numbers, numbers + N);
	go(0, N, M);
}