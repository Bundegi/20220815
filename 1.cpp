#include <iostream>
#define endl "\n"
#define fast ios::sync_with_stdio cin.tie(nullptr) cout.tie(nullptr)
using namespace std;
//1072 °ÔÀÓ
int main() {
	double X, Y;
	cin >> X >> Y;
	long long min = 0;
	long long max = 1000000000;
	long long win = 100*Y / X;
	if (win >= 99) {
		cout << -1;
		return 0;
	}
	while (min <= max) {
		long long mid = (min + max) / 2;
		long long per = 100 * (mid + Y) / (mid + X);
		if (win < per) max = mid - 1;
		else min = mid + 1;
	}
	cout << min;
}