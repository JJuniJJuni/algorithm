#include <iostream>
using namespace std;

int main() {
	int N, S;
	cin >> N >> S;
	int numbers[20];
	int answer = 0;
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	int all = (1 << N);
	for (int i = 1; i < all; i++) {
		int sum = 0;
		for (int j = 0; j < 20; j++) {
			if (i & (1 << j)) {
				sum += numbers[j];
			}
		}
		if (sum == S) {
			answer += 1;
		}
	}
	cout << answer;
}