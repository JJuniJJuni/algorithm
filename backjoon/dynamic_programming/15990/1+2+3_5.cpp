#include <iostream>
#include <vector>
using namespace std;
long long dist[100001][4];
const long long mod = 1000000009;
const int limit = 100000;


int main() {
	for (int i = 1; i <= limit; i++) {
		if (i - 1 >= 0) {
			dist[i][1] = dist[i - 1][2] + dist[i - 1][3];
			if (i == 1) {
				dist[i][1] = 1;
			}
		}
		if (i - 2 >= 0) {
			dist[i][2] = dist[i - 2][1] + dist[i - 2][3];
			if (i == 2) {
				dist[i][2] = 1;
			}
		}
		if (i - 3 >= 0) {
			dist[i][3] = dist[i - 3][1] + dist[i - 3][2];
			if (i == 3) {
				dist[i][3] = 1;
			}
		}
		dist[i][1] %= mod;
		dist[i][2] %= mod;
		dist[i][3] %= mod;
	}
	int T;
	scanf_s("%d", &T);
	vector<int> ans;
	for (int i = 0; i < T; i++) {
		int n;
		scanf_s("%d", &n);
		ans.push_back((dist[n][1] + dist[n][2] + dist[n][3]) % mod);
	}
	int length = ans.size();
	for (int i = 0; i < T; i++) {
		printf("%d\n", ans[i]);
	}
}