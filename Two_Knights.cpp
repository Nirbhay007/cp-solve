#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	unsigned long long t;
	cin >> t;
	for (ll n = 1; n <= t; n++)
	{

		unsigned long long total_ways = ((n * n) * ((n * n) - 1)) / 2;

		unsigned long long ans = total_ways - (4 * (n - 1) * (n - 2));
		cout << ans << "\n";
	}
}