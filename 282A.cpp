#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt, X(0);
	string bit;
	cin >> tt;
	while (tt--)
	{
		cin >> bit;
		if (bit == "++X" || bit == "X++")
			X++;
		else
			X--;
	}
	cout << X;
}
