#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string p, q; int a(0);
	cin >> p >> q;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] != q[i])
			a++;
	}
	sort(p.begin(), p.end());
	sort(q.begin(), q.end());
	if (a == 2 && p == q)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
