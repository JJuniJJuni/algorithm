#include <iostream>
using namespace std;

bool check[7];
int answers[7];

void go(int idx, int n, int m) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			cout << answers[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!check[i]) {
			answers[idx] = i + 1;
			go(idx + 1, n, m);
		}
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	go(0, N, M);
}