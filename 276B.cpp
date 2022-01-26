#include <bits/stdc++.h>
using namespace std;
map<int, int>A;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int S = 0;
	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i++)
		A[s[i]]++;

	for (char i = 'a'; i <= 'z'; i++)
		if (A[i] % 2)
			S++;

	if (S % 2 || S == 0)
		cout << "First";

	else
		cout << "Second";
	return 0;
}