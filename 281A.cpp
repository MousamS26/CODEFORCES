#include <iostream>
#include <cctype>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	if (islower(s[0])) {
		s[0] = toupper(s[0]);
	}
	cout << s << endl;
}