#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string p;
	cin >> p;
	if (p.find_first_of("HQ9") != string::npos)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO";
	}
}
