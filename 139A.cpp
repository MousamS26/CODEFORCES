#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int i, n;
	cin >> n;
	int a[7];
	for (i = 0; i < 7; i++)
		cin >> a[i];
	while (n > 0)
	{	if (i == 7)
		{
			//resetting to monday
			i = 0;
		}
		n -= a[i];
		i++;
	}
	cout << i;
}