#include <iostream>
#include <algorithm>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, x, y, z, xsum(0), ysum(0), zsum(0);
	cin >> n;

	while (n--)
	{
		cin >> x >> y >> z;
		xsum += x;
		ysum += y;
		zsum += z;
	}
	if ( xsum == 0 && ysum == 0 && zsum == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
}