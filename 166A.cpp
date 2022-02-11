#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	pair<int, int>a[50];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i].first >> a[i].second;
		a[i].first *= -1;
	}
	sort(a, a + n);

	cout << count(a, a + n, a[k - 1]) << endl;
}
