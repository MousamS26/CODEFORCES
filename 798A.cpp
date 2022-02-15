#include<bits/stdc++.h>
using namespace std;
int i, n, t; string s;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	for (cin >> s, n = s.size(); i < n / 2; i++)t += s[i] != s[n - i - 1]; cout << (t == 1 | !t & n % 2 ? "YES" : "NO");
}
