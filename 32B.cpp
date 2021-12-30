#include <iostream>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	int i = 0;

	while (i < s.size())
	{
		if (s[i] == '.')
			cout << "0";
		else if (s[i] == '-' && s[i + 1] == '.') {
			cout << "1";
			++i;
		}
		else if (s[i] == '-' && s[i + 1] == '-') {
			cout << "2";
			++i;
		}
		++i;
	}

}