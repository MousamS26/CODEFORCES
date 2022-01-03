#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, points;
	cin >> n >> points;
	int min(points), max(points), amazing(0);
	while (n--)
	{
		cin >> points;
		if (points > max)
		{
			max = points;
			amazing++;
		}
		if (points < min)
		{
			min = points;
			amazing++;
		}
	}
	cout << amazing << endl;

}
