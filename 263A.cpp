#include <iostream>
#include <cmath>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int a = 0;
	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 1; j <= 5; ++j)
		{
			cin >> a;
			if (a == 1)
			{
				cout << abs(i - 3) + abs(j - 3) << endl;
			}
		}
	}
}