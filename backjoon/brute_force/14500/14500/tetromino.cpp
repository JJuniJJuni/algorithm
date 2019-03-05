#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int paper[500][500];
	int mino[19][3][2] = {
		{{0,1}, {0,2}, {0,3}},
		{{1,0}, {2,0}, {3,0}},
		{{1,0}, {1,1}, {1,2}},
		{{0,1}, {1,0}, {2,0}},
		{{0,1}, {0,2}, {1,2}},
		{{1,0}, {2,0}, {2,-1}},
		{{0,1}, {0,2}, {-1,2}},
		{{1,0}, {2,0}, {2,1}},
		{{0,1}, {0,2}, {1,0}},
		{{0,1}, {1,1}, {2,1}},
		{{0,1}, {1,0}, {1,1}},
		{{0,1}, {-1,1}, {-1,2}},
		{{1,0}, {1,1}, {2,1}},
		{{0,1}, {1,1}, {1,2}},
		{{1,0}, {1,-1}, {2,-1}},
		{{0,1}, {0,2}, {-1,1}},
		{{0,1}, {0,2}, {1,1}},
		{{1,0}, {2,0}, {1,1}},
		{{1,0}, {2,0}, {1,-1}},
	};

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> paper[i][j];
		}
	}
	int current = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < 19; k++) {
				int sum = paper[i][j];
				bool ok = true;
				for (int z = 0; z < 3; z++) {
					int x = mino[k][z][0];
					int y = mino[k][z][1];
					if (i + x >= 0 && i + x < N && j + y >= 0 && j + y < M) {
						sum += paper[i + x][j + y];
					}
					else {
						ok = false;
						break;
					}
				}
				if (ok && sum > current) {
					current = sum;
				}
			}
		}
	}
	cout << current;
	return 0;
}