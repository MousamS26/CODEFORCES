#include<iostream>
using namespace std;

bool magix(string n)
{
	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] != '1' && n[i] != '4')
		{
			return false;
		}
	}
	if (n[0] == '4')
	{
		return false;
	}
	if (n.find("444") != n.npos)
	{
		return false;
	}

	return true;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string number;
	cin >> number;

	if (magix(number))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

}