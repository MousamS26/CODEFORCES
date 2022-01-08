#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	long long n, m, a, i, j;
	cin >> n >> m >> a;
	i = n / a;
	j = m / a;

	if (i * a < n)
		i++;
	if (j * a < m)
		j++;
	cout << i * j << endl;
}