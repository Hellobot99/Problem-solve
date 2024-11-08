#include<iostream>
#include <queue>
using namespace std;

//Àý´ë°ª Èü
struct cmp {
	bool operator()(int n1, int n2) {
		if (abs(n1) > abs(n2)) {
			return true;
		}
		else if (abs(n1) == abs(n2)) {
			if (n1 > n2) return true;
			else return false;
		}
		else return false;
	}
};

int main() {
	priority_queue<int,vector<int>,cmp> pq;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0 && pq.size() == 0)cout<<0<<endl;
		else if (x == 0) {
			cout << pq.top() << endl;
			pq.pop();
		}
		else pq.push(x);
	}
	return 0;
}
