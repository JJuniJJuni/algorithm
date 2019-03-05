#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int get_gcd(int, int);


int main() {
	int count;
	cin >> count;
	cin.ignore();
	vector<string> cases;
	for (int i = 0; i < count; i++) {
		string numbers;
		getline(cin, numbers);
		cases.push_back(numbers);
	}
	for (vector<string>::iterator i = cases.begin(); i != cases.end(); i++) {
		vector <int> numbers;
		stringstream ss(*i);
		string number;
		long sum = 0;
		while (ss >> number) {
			numbers.push_back(stoi(number));
		}
		for (vector<int>::iterator j = numbers.begin() + 1; j != numbers.end() - 1; j++) {
			for (vector<int>::iterator k = j + 1; k != numbers.end(); k++) {
				int gcd = get_gcd(*j, *k);
				sum += get_gcd(*j, *k);
			}
		}
		cout << sum << '\n';
	}
}

int get_gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return get_gcd(b, a%b);
	}
}