#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

	ll n, k;
	cin >> n >> k;

	ll q = n / k;
	ll r = n % k;

	ll max = n - (k - 1);

	if (k > 1)
	{
		cout << (k - r) * q * (q - 1) / 2 + r * q * (q + 1) / 2 << " ";
		ll ans2 = max * ((ceil(n - k) * 1.0) / 2);
		cout << ans2;
	}
	else
	{
		cout << n * (n - 1) / 2 << " " << n * (n - 1) / 2;
	}
}