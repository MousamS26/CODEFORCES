#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, p, total(0);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> p;
		total += p;
	}
	cout << static_cast<double>(total) / static_cast<double>(n) << endl;
	return 0;
}