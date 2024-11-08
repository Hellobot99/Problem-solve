#include <iostream>
#include <ctime>
using namespace std;


int find(int arr[], int max, int n, int b) {
	int cha, result = 0, block = b;
	for (int i = 0; i < n; i++) {
		cha = arr[i] - max;
		if (cha > 0) {
			block += cha;
			result += 2 * cha;
		}
		if (cha < 0) {
			block += cha;
			result -= cha;
		}
	}
	if (block < 0)return -1;
	return result;

}


int main() {
	
	clock_t start, finish;
	double duration;

	start = clock();
	int n, b, m;
	cin >> n >> m >> b;
	int min = 0, max = 0, result = 0, e = 0, ground = 0;

	int* arr = new int[n * m];
	for (int i = 0; i < n * m; i++) {
		cin >> arr[i];
		if (i == 0) {
			min = arr[i];
			max = arr[i];
		}
		else {
			if (min > arr[i])min = arr[i];
			if (max < arr[i])max = arr[i];
		}

	}
	ground = arr[0];


	for (int i = min; i < max + 1; i++) {
		e = find(arr, i, n * m, b);
		if (e < 0)continue;
		if (i == min) {
			result = e;
			ground = i;
		}
		else if (result > e) {
			result = e;
			ground = i;
		}
		else if (result == e && ground < i)
			ground = i;
	}

	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << "ÃÊ" << endl;

	return 0;
}

	


