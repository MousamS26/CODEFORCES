#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string a; cin >> a;
	auto b = a.find('0');
	a.erase(a.begin() + (b == -1 ? 0 : b));//if 0 not found, b==-1
	cout << a;
}