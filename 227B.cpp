#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	ll n;
	cin >> n;

	ll a[100005];
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	ll Vasya[100005];
	ll Petya[1000005];
	for (int i = 1; i <= n; i++)
		Vasya[a[i]] = i;
	for (int i = n; i >= 1; i--)
		Petya[a[i]] = n - i + 1;

	ll m;
	cin >> m;

	ll ansleft = 0, ansright = 0;
	while (m--) {
		int x;
		cin >> x;
		ansleft += Vasya[x];
		ansright += Petya[x];
	}
	cout << ansleft << " " << ansright << endl;

}
