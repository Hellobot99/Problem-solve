#include <iostream>
using namespace std;

int white = 0;
int blue = 0;

void check(int **arr, int size,int x, int y) {
	if (size == 1) {
		if (arr[x][y])blue++;
		else white++;
		return;
	}
	for (int i = x; i < size+x; i++) {
		for (int k = y; k < size+y; k++) {
			if (arr[i][k] != arr[x][y]) {
				check(arr, size / 2, x, y);
				check(arr, size / 2, x + size / 2, y);
				check(arr, size / 2, x, y + size / 2);
				check(arr, size / 2, x + size / 2, y + size / 2);	
				return;
			}
		}
	}
	
	if (arr[x][y])blue++;
	else white++;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N;
	cin >> N;
	int** arr = new int* [N];

	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			cin >> arr[i][k];
		}
	}

	check(arr, N, 0, 0);

	cout << white << endl << blue;
}