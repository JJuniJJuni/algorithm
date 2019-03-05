#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector <int> numbers;
	cin >> n;
	for (int i = 0; i < n; i++) {
		numbers.push_back(i + 1);
	}
	do {
		for (int i = 0; i < n; i++) {
			cout << numbers[i] << " ";
		}
		cout << "\n";
	} while (next_permutation(numbers.begin(), numbers.end()));
	return 0;
}