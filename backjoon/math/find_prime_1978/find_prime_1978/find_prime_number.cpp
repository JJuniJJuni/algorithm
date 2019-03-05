#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int count;
	cin >> count;
	cin.ignore();
	vector <int> numbers;
	for (int i = 0; i < count; i++) {
		int number;
		cin >> number;
		numbers.push_back(number);
	}
	int answer = 0;
	for (vector<int> ::iterator i = numbers.begin(); i != numbers.end(); i++) {
		bool is_prime = false;
		if (*i < 2) {
			continue;
		}
		for (int j = 2; j * j < *i; j++) {
			if (*i % j == 0) {
				is_prime = true;
			}
		}
		if (!is_prime) {
			answer += 1;
		}
	}
	cout << answer << '\n';

}