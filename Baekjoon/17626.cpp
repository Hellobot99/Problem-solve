#include <iostream>
using namespace std;

int result[224] = { 0 };

int fuc(int num,int list[]) {
	
}

int main() {
	int n,count = 0, m = 223;
	int list[224] = { 0 };
	
	for (int i = 1; i < 224; i++) {
		list[i] = i * i;
	}
	cin >> n;

	for (int i = 1; i < 224; i++) {
		fuc(i,list);
	}

	cout << count;

	return 0;
}