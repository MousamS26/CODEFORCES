#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	vector<int> s(4);
	cin >> s[0] >> s[1] >> s[2] >> s[3];
	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());
	cout << 4 - s.size() << endl;
}
