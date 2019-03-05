#include <iostream>
using namespace std;
int get_gcd(int, int);
int get_lcm(int, int, int);

int main(void) {
	int a, b, gcd;
	cin >> a >> b;
	gcd = get_gcd(a, b);
	cout << gcd << '\n' << get_lcm(a, b, gcd) << '\n';
}

int get_gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return get_gcd(b, a%b);
	}
}

inline int get_lcm(int a, int b, int gcd) {
	return a * b / gcd;
}