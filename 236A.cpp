#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());
	if (s.length() % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!" << endl;
	}

}
