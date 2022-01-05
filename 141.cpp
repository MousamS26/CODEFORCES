#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string guest , host, mixed, result;
	cin >> guest >> host >> mixed;
	if (guest.length() + host.length() == mixed.length())
	{
		result = guest + host;
		sort(result.begin(), result.end());
		sort(mixed.begin(), mixed.end());
		if (mixed == result)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		cout << "NO";
	}


}
