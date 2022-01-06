#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, m;
	int pos[100001];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		pos[num] = i + 1;
	}

	ll vasya = 0, petya = 0;

	cin >> m;
	while (m--)
	{
		int b;
		cin >> b;
		vasya += pos[b];
		petya += n - pos[b] + 1;
	}

	cout << vasya << " " << petya << endl;

}
