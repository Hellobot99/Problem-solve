#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c,d;
    cin >> a >> b >> c;
    d = a + b;
    cout << stoi(a) + stoi(b) - stoi(c) << endl;
    cout <<stoi(d)-stoi(c);
    return 0;
}
