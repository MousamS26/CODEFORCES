#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt;
	cin >> tt;
	while (tt--)
	{
		int N; cin >> N;
		vector<int> v(N);
		for (int i = 0; i < N; ++i)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		cout << v[N - 1] - v[0] << endl;
	}
}