#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	char a[] = "aeiouy";
	char c;
	while (cin >> c)
	{
		if (!strchr(a, c |= 32))
			cout << "." << c;
	}
	return 0;
}
