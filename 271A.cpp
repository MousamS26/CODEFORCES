#include <iostream>
#include<math.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int y;
	cin >> y;
	while (true)
	{
		y++;
		int a = y / 1000;
		int b = (y / 100) % 10;
		int c = (y / 10) % 10;
		int d = y % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d)
		{
			break;
		}
	}
	cout << y << endl;
}