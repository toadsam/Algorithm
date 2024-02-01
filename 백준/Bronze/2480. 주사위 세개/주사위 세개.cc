#include <iostream>
using namespace std;
 
int main(int argc, char const *argv[]) {
 
	int a, b, c;
	cin >> a >> b >> c;
	// 만약 모든 변수가 다른 경우
	if (a != b && b != c && a != c) {
		int max;
		// 만약 a > b 라면
		if (a > b) {
			// c > a > b 라면
			if (c > a) {
				max = c;
			}
			// a > (b, c)
			else {
				max = a;
			}
		}
		// b > a 라면
		else {
			if (c > b) {
				max = c;
			}
			else {
				max = b;
			}
		}
		cout << max * 100;
	}
	else {
		if (a == b && a == c) {
			cout << 10000 + a * 1000;
		} else {
			if (a == b || a == c) {
				cout << 1000 + a * 100;
			}
			else {
				cout << 1000 + b * 100;
			}
		}
	}
	return 0;
}