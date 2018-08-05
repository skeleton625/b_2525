#include <iostream>
using namespace std;

int main() {
	int h, m, t;
	cin >> h >> m;
	cin >> t;
	m += t % 60;
	h += t / 60 + m / 60;
	m %= 60;
	h %= 24;

	cout << h << " " << m;
}