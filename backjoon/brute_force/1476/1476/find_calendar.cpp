#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int E, S, M;
	cin >> E >> S >> M;
	E -= 1;
	S -= 1;
	M -= 1;
	int year = 0;
	while (true) {
		if (year % 19 == M && year % 28 == S && year % 15 == E) {
			break;
		}
		year += 1;
	}
	cout << year + 1;
	return 0;
}