#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int T = 1;
	cin >> T;
	while (T--) {
		ll A, B, C; cin >> A >> B >> C;
		ll G1 = 2 * B - C;
		ll G2 = 2 * B - A;
		ll G3 = A + C;
		cout << ((G1 % A == 0 && G1 > 0) || (G2 % C == 0 && G2 > 0) || (G3 % 2 == 0 && (G3 / 2) % B == 0 && G3 > 0) ? "YES" : "NO") << endl;
	}

	return 0;
}
