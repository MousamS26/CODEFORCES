#include<bits/stdc++.h>
using namespace std;

int n, five, zero, k;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	cin >> n;
	while (n--)cin >> k, k == 5 ? five++ : zero++; five = (five / 9) * 9;
	if (five == 0 || zero < 1) {cout << (zero < 1 ? "-1" : "0"); return 0;}
	while (five--)cout << '5';
	while (zero--)cout << '0';
}
