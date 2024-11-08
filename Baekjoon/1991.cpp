#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

void preorder (map<char, pair<char, char>> arr, char parent) {
	cout << parent;
	if (arr[parent].first !='.')preorder(arr, arr[parent].first);
	if (arr[parent].second != '.')preorder(arr, arr[parent].second);
}

void inorder(map<char, pair<char, char>> arr, char parent) {
	if (arr[parent].first != '.')inorder(arr, arr[parent].first);
	cout << parent;
	if (arr[parent].second != '.')inorder(arr, arr[parent].second);
}

void postorder(map<char, pair<char, char>> arr, char parent) {
	if (arr[parent].first != '.')postorder(arr, arr[parent].first);
	if (arr[parent].second != '.')postorder(arr, arr[parent].second);
	cout << parent;
}

int main() {
	int n;
	char a, b, c;
	map<char, pair<char, char>> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		arr[a] = make_pair(b, c);
	}
	
	preorder(arr, 'A');	
	cout << endl;
	inorder(arr, 'A');
	cout << endl;
	postorder(arr, 'A');

	return 0;
}