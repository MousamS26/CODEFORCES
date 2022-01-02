#include <iostream>
#include <algorithm>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, l, r;
	int left = 0;
	int right = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> l >> r;
		left += l;
		right += r;
	}
	cout << (min(left, n - left) + min(right, n - right));
}