#include <iostream>
#include <vector>
using namespace std;
int dist[12];
vector<int> ans;
int main() {
	int T;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		int N;
		scanf_s("%d", &N);
		dist[1] = 1;
		dist[2] = 2;
		dist[3] = 4;
		for (int j = 4; j <= N; j++) {
			dist[j] = dist[j - 1] + dist[j - 2] + dist[j - 3];
		}
		ans.push_back(dist[N]);
	}
	int length = ans.size();
	for (int i = 0; i < length; i++) {
		printf("%d\n", ans[i]);
	}
}