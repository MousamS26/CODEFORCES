#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	char s[n];
	cin >> s;
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (s[i - 1] == s[i])
			count++;
	}
	cout << count;
}