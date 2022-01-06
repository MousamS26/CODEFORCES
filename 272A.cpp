#include <iostream>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int numOfFreinds, fingers, total(0), answer(0);
	cin >> numOfFreinds;
	for (int i = 0; i < numOfFreinds; ++i)
	{
		cin >> fingers;
		total += fingers;
	}
	for (int i = 1; i <= 5; ++i)
	{
		if ((total + i) % (numOfFreinds + 1) != 1)
		{
			answer += 1;
		}
	}
	cout << answer << endl;
}