#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, i = 1;
		vector<int> ans;
		cin >> n;
		while (n > 0) {
			if (n % 10 > 0)
				ans.push_back((n % 10) * i);
			n /= 10;
			i *= 10;
		}
		cout << ans.size() << endl;
		for (auto x : ans)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}

