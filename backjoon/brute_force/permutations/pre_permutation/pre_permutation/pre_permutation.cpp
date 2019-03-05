#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	vector <int> numbers;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		numbers.push_back(k);
	}
	if (prev_permutation(numbers.begin(), numbers.end())) {
		for (int i = 0; i < n; i++) {
			cout << numbers[i] << " ";
		}
	}
	else {
		cout << -1;
	}
}