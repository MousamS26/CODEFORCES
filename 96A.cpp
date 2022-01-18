#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	//O(1) T.C.
	char a[101];
	gets(a);
	puts(strstr(a, "0000000") || strstr(a, "1111111") ? "YES" : "NO");
	return 0;

	//O(n) T.C.
	string s;
	cin >> s;
	int count(1);
	bool checker = false;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == s[i + 1])
			count++;
		else
			count = 1;
		if (count >= 7)
		{
			checker = true;
			break;
		}
	}
	if (checker)
		cout << "YES";
	else
		cout << "NO";
	// cout << count << endl;


}
