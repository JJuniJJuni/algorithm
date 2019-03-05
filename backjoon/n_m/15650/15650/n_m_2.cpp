#include <iostream>
using namespace std;
int numbers[8];
//void go(int index, int start, int n, int m) {
//	if (index == m) {
//		for (int i = 0; i < m; i++) {
//			cout << numbers[i] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	for (int i = start; i <= n; i++) {
//		numbers[index] = i;
//		go(index + 1, i + 1, n, m);
//	}
//}
//
//int main() {
//	int N, M;
//	cin >> N >> M;
//	go(0, 1, N, M);
//	return 0;
//}
// solve the problem using for

void go(int index, int selected, int n, int m) {
	if (selected == m) {
		for (int i = 0; i < m; i++) {
			cout << numbers[i] << " ";
		}
		cout << "\n";
		return;
	}
	if (index > n) {
		return;
	}
	numbers[selected] = index;
	go(index + 1, selected + 1, n, m);
	go(index + 1, selected, n, m);
}

int main() {
	int N, M;
	cin >> N >> M;
	go(1, 0, N, M);
	return 0;
}