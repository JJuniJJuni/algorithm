#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int oper[4];
int main() {
	int N = 0;
	int number = 0;
	scanf_s("%d", &N);
	vector <int> numbers;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &number);
		numbers.push_back(number);
	}
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &number);
		oper[i] = number;
	}
	return 0;
}