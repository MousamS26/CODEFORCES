#include <iostream>
#include <algorithm>
using namespace std;
bool check = true;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int s, n;
	cin >> s >> n;
	pair<int, int> arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {

		if (arr[i].first >= s) {
			check = false;
			continue;
		}
		s = s + arr[i].second;
	}
	cout << (check == true ? "YES" : "NO");
	return 0;
}

