#include <iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	int upper(0), lower(0);

	for (size_t i = 0; i < s.length(); ++i)
	{
		if (isupper(s[i]))
		{
			upper++;
		}
		else
		{
			lower++;
		}
	}
	if (upper > lower)
	{
		for (size_t i = 0; i < s.length(); ++i)
		{
			s[i] = toupper(s[i]);
		}
	}
	else
	{
		for (size_t i = 0; i < s.length(); ++i)
		{
			s[i] = tolower(s[i]);
		}
	}
	cout << s << endl;

}