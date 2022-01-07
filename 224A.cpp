#include <bits/stdc++.h>
using namespace std;

int areaToLength(int a1, int a2, int a3)
{
	int x = sqrt(a1 * a3 / a2);
	int y = sqrt(a2 * a1 / a3);
	int z = sqrt(a3 * a2 / a1);

	int sum = x + y + z;
	return 4 * sum;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;

	cout << areaToLength(a1, a2, a3);
}