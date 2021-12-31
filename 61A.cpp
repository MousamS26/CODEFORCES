#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string x, y;
	cin >> x >> y;
	for (size_t i = 0; i < x.length(); ++i)
	{
		if (x[i] == y[i])
		{
			x[i] = '0';
		}
		else
		{
			x[i] = '1';
		}
	}
	cout << x << endl;
}