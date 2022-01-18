#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	char a[101];
	gets(a);
	puts(strstr(a, "0000000") || strstr(a, "1111111") ? "YES" : "NO");
	return 0;
}
