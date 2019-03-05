#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, k;
	vector <int> origin, numbers;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		numbers.push_back(k);
	}
	origin = numbers;
	if (! next_permutation(numbers.begin(), numbers.end())) {
		cout << -1;
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << numbers[i] << " ";
		}
	}
}