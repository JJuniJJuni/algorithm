#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string com;
	int S = 0;
	int num = 0;
	int all = ((1 << 20) - 1);
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> com;
		if (com.compare("all") != 0 && com.compare("empty") != 0) {
			cin >> num;
		}
		num -= 1;
		if (!com.compare("add")) {
			S = S | (1 << num);
		}
		else if(!com.compare("remove")) {
			S = S & ~(1 << num);
		}
		else if(!com.compare("check")) {
			int check = S & (1 << num);
			if (check) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (!com.compare("toggle")) {
			S = S ^ (1 << num);
		}
		else if (!com.compare("all")) {
			S = all;
		}
		else {
			S = 0;
		}
	}
}