#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int f[m];
	for (int i = 0; i < m; i++) {
		cin >> f[i];
	}
	sort(f, f + m);
	int best = INT_MAX;
	for (int k = 0; k < (m - n) + 1; k++) {
		best = min(best, f[k + n - 1] - f[k]);
	}
	cout << best << '\n';
	return 0;
}
