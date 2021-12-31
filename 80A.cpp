#include <iostream>
using namespace std;

bool prime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;

	int next = n + 1;
	while (!prime(next))
	{
		next += 1;
	}
	cout << ( next == m ? "YES" : "NO") << endl;

}