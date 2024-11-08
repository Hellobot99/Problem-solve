#include <iostream>
#include <string>
using namespace std;

void choose(int first,int n) {
	
	for (int i = first; i < n; i++) {
		cout << first << " ";
		choose(i + 1, n);		
	}
	cout << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	choose(1, n);
	
	//n개 중에 m개 선택

	

}