#include<cstdio>
#include<iostream>
using namespace std;
int a[5001], b[600001], n, j, x, i;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	for (i = 1; i <= 2 * n; ++i)
	{
		scanf("%d", &x);
		if (a[x] > 0) b[j++] = a[x], b[j++] = i, a[x] = 0;
		else a[x] = i;
	}
	if (j != 2 * n) puts("-1");
	else for (i = 0; i < j; i += 2)printf("%d %d\n", b[i + 1], b[i]);
}
