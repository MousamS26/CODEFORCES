#include <iostream>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, t;
	string s;
	cin >> n >> t >> s;
	while (t--)
	{
		for (int i = 1; i < n; ++i)
		{
			if (s[i] == 'G' && s[i - 1] == 'B')
			{
				s[i] = 'B';
				s[i - 1] = 'G';
				++i;
			}
		}
	}
	cout << s << endl;
}