#include <iostream>
using namespace std;
int answers[8];

void go(int idx, int start, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << answers[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = start; i < n; i++) {
		answers[idx] = i + 1;
		go(idx + 1, i, n, m);
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	go(0, 0, N, M);
	return 0;
}