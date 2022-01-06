#include <iostream>
#include <cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int numOfKids, chocolates, lastKid;
	double total, max(0);
	cin >> numOfKids >> chocolates;
	for (int i = 1; i <= numOfKids; i++)
	{
		cin >> total;
		if (ceil(total / chocolates) >= max)
		{
			lastKid = i;
			max = ceil(total / chocolates);
		}
	}
	cout << lastKid << endl;


}