#include<iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int DFS(int root,map<char, pair<char, char>> arr, int count[]) {
	
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	char a, b;
	map<char, pair<char, char>> arr;

	cin >> n;
	int* count = new int[n+1];
	for (int i = 0; i < n+1; i++) {
		count[i] = 0;
	}
	while (cin >> a >> b) {
		cin >> a >> b;
		if (!count[a]) {
			arr[a] = make_pair(b, NULL);
			count[a]++;
		}
		else {
			arr[a].second = b;
		}
	}
	for (int i = 0; i < n; i++) {
		count[i] = 0;
	}

	DFS(1, arr, count);

	for (int i = 2; i < n + 1; i++) {
		cout << count[i];
	}

}