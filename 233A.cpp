#include <iostream>
#include <algorithm>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	if (n % 2 == 1)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << "2 1";
		for (int i = 3; i < n; i += 2)
		{
			cout << " " << i + 1 << " " << i;
		}
		cout << endl;
	}

}