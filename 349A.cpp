#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, a = 0, b = 0;
	cin >> n;
	for (int i; cin >> i; i++)
	{
		i == 25 ? a++ : (a--, i == 50 ? b++ : b--);
		if (b < 0)b++, a -= 2;
		if (a < 0)
			return cout << "NO", 0;
	}
	cout << "YES";

}
