#include<iostream>
using namespace std;
long long m, n, s, x = 1, y;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n, k, p = 1, x;
	long long r = 0;
	cin >> n >> k;
	while (k--)
	{
		cin >> x;
		r += (x - p + n) % n; p = x;
	}
	cout << r;
}