#include <bits/stdc++.h>
using namespace std;

string ffs(string str)
{
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	return str;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int count = 0;
	string s1, s2;

	getline(cin, s1);
	getline(cin, s2);

	s1 = ffs(s1);

	s2 = ffs(s2);



	for (int i = 0; i < s2.length(); i++) {
		for (int j = 0; j < s1.length(); j++) {

			if (s2[i] == s1[j]) {

				count++;

				s1[j] = '0';

				break;

			}
		}
	}

	if (count == s2.length()) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}