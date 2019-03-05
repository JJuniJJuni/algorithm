#include <iostream>
using namespace std;
bool check[8];
int numbers[8];
void go(int index,int n,int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << numbers[i] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++) {
		if (!check[i - 1]) {
			check[i - 1] = true;
			numbers[index] = i;
			go(index+1, n, m);
			check[i - 1] = false;
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	go(0, N, M);
	return 0;
}