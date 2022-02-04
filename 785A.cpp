#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, sides(0); cin >> n;
	while (n--)
	{
		string s; cin >> s;
		if (s == "Icosahedron")
		{
			sides += 20;
		}
		else if (s == "Cube")
		{
			sides += 6;
		}
		else if (s == "Octahedron")
		{
			sides += 8;
		}
		else if (s == "Dodecahedron")
		{
			sides += 12;
		}
		else if (s == "Tetrahedron")
		{
			sides += 4;
		}
	}
	cout << sides;
}
