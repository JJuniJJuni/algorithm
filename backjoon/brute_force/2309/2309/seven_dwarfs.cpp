#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector <int> dwarfs;
	int sum = 0;
	int dwarf;
	for (int i = 0; i < 9; i++) {
		cin >> dwarf;
		sum += dwarf;
		dwarfs.push_back(dwarf);
	}
	sort(dwarfs.begin(), dwarfs.end());
	int first = 0;
	int second = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (dwarfs[i] + dwarfs[j]) == 100) {
				first = i;
				second = j;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i != first && i != second) {
			cout << dwarfs[i] << '\n';
		}
	}
	return 0;
}