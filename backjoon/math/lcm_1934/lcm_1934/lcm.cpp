#include <iostream>
using namespace std;
int get_gcd(int, int);


int main() {
	int count, gcd;
	cin >> count;
	int *a_cases = new int[count];
	int *b_cases = new int[count];
	int *answers = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> a_cases[i] >> b_cases[i];
	}
	for (int i = 0; i < count; i++) {
		int a = a_cases[i];
		int b = b_cases[i];
		gcd = get_gcd(a, b);
		//cout << "최대 공약수는 " << gcd << "입니다\n";
		answers[i] = (a * b) / gcd;
	}
	for (int i = 0; i < count; i++) {
		cout << answers[i] << '\n';
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