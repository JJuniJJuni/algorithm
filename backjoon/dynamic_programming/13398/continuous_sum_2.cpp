#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	vector<int> dl(n);
	vector<int> dr(n);
	dl[0] = a[0];
	dr[n - 1] = a[n - 1];
	for (int i = 1; i < n; i++) {
		dl[i] = max(dl[i - 1] + a[i], a[i]);
	}

	for (int i = n - 2; i >= 0; i--) {
		dr[i] = max(dr[i + 1] + a[i], a[i]);
	}
	int ans = dl[0];
	for (int i = 1; i < n; i++) {
		ans = max(ans, dl[i]);
	}
	for (int i = 1; i < n - 1; i++) {
		ans = max(ans, dl[i - 1] + dr[i + 1]);
	}
	printf("%d\n", ans);
}