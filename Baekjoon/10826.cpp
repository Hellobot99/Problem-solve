#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string bigNumberAdd(string a, string b) {
	int carry = 0;
	string result = "";

	while (!a.empty() || !b.empty() || carry) { //다 더할때 까지
		if (!a.empty()) {
			carry += a.back() - '0'; //일의 자리 부터 빼서 캐리에 더하기
			a.pop_back();
		}

		if (!b.empty()) {
			carry += b.back() - '0'; //일의 자리 부터 빼서 캐리에 더하기
			b.pop_back();
		}

		result += ((carry % 10) + '0'); //carry 를 10으로 나눈 나머지는 더하기 결과 값
		carry /= 10; // 몫은 올림수로써 다음 연산에 더해짐
	}

	reverse(result.begin(), result.end()); //일의 자리부터 더했으니 뒤집어야 맞는 값
	return result;
}

int main() {
	int n;
	cin >> n;
	vector<string>arr(n+10);
	arr[0] = '0';
	arr[1] = '1';
	arr[2] = '1';
	arr[3] = '2';

	for (int i = 4; i < n + 1; i++) {
		arr[i] = bigNumberAdd(arr[i - 1], arr[i - 2]);
	}	
	
	cout << arr[n];
	return 0;
}