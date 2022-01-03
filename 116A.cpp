#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, a, b, capacity(0), mincap(0);
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		capacity -= a;
		capacity += b;
		if (capacity > mincap)
		{
			mincap = capacity;
		}
	}
	cout << mincap << endl;
}
