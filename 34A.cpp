#include <bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int A = abs(arr[0] - arr[1]);
	for (int i = 0; i < n - 1; i++) {
		if (abs(arr[i] - arr[i + 1]) < A) {
			A = abs(arr[i] - arr[i + 1]);
		}
	}
	if (abs(arr[n - 1] - arr[0]) < A) {
		cout << n << " " << 1;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (abs(arr[i] - arr[i + 1]) == A) {
				cout << i + 1 << " " << i + 2;
				break;
			}
		}
	}
}