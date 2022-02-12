#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int a[n];
		int b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int j = 0; j < n; j++)
		{
			cin >> b[j];
		}
		for (int i = 0; i < n; i++)
		{
			if (b[i] > a[i])
			{
				swap(a[i], b[i]);
			}
		}
		sort(a, a + n);
		sort(b, b + n);
		cout << a[n - 1]*b[n - 1] << endl;
	}
}

