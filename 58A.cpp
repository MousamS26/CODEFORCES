#include <bits/stdc++.h>
using namespace std;

string u = "hello";

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int j(0), count(0);
	string s; cin >> s;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == u[j])
		{
			j++; count++;
			if (count == 5)
			{
				break;
			}
		}
	}
	if (count == 5)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;

}