#include <iostream>

using namespace std;
long long* result = new long long;

long long mod_exp(long long a, long long b, long long c) {
	if (b == 0) {
		return 1; 
	}
	long long half = mod_exp(a, b / 2, c); 
	if (b % 2 == 0) {
		return (half * half) % c;
	}
	else {
		return (half * half % c * a % c) % c;
	}
}

int main(){
	long long a, b, c;
	cin >> a >> b >> c;
	cout << mod_exp(a, b, c) << endl;	
	return 0;
}
