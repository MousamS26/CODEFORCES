#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, m, sum(0);
	cin >> n;
	while (n--)
	{
		cin >> m;
		sum += m;
	}
	cout << (sum >= 1 ? "HARD" : "EASY");

}
