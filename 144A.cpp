#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, a;
	cin >> n >> a;

	int mina(a), maxa(a), mini(0), maxi(0);
	for (int i = 1; i < n; ++i)
	{
		cin >> a;
		if (a > maxa)
		{
			maxa = a;
			maxi = i;
		}
		if (a <= mina)
		{
			mina = a;
			mini = i;
		}
	}
	cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;

}