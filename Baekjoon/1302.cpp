#include<iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	set<string> check;
	map<string, int> amap;
	string book,best_seller;
	int n,max=0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> book;
		if (check.find(book) != check.end()) {
			amap[book] = 0;
		}
		else amap[book]++;		
	}

	for (auto iter = amap.begin(); iter != amap.end(); iter++) {
		if (iter->second > max) {
			max = iter->second;
			best_seller = iter->first;
		}
		else if (iter->second == max && iter->first<best_seller) {
			max = iter->second;
			best_seller = iter->first;
		}
	}

	cout << best_seller;
}