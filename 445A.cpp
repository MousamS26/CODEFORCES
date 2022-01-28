#include <bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	cin >> n >> m;
	for ( int i = 0; i < n; i++) {
		for ( int j = 0; j < m; j++ ) {
			char ch;
			cin >> ch;
			if ( ch == '.' && (i + j) % 2)
				cout << 'B';
			else if (ch == '.')
				cout << 'W';
			else
				cout << '-';
		}
		cout << endl;
	}
	return 0;
}