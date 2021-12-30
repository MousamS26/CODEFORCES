#include <iostream>
#include <algorithm>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int w;
	cin >> w;

	if (w % 2 == 0 && w > 2)
		cout << "YES\n";
	else
		cout << "NO\n";

}