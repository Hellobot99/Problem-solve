#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, m,count=0,a;

	cin >> n >> m;
	if (n > m)a = n;
	else a = m;
	string* heard = new string[n+1];
	string* seen = new string[m+1];
	string* hr = new string[a+1];

	for (int i = 0; i < n; i++) {
		cin >> heard[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> seen[i];
		for (int k = 0; k < m; k++) {
			if (heard[k].compare(seen[i])==0) {
				hr[count] = seen[i];
				count++;
			}
		}	
	}

	cout << count << endl;
	sort(hr, hr + count);
	for (int i = 0; i < count; i++) {
		cout << hr[i] << endl;
	}

	return 0;
}