#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{

	ll t;

	cin >> t;

	while (t--)
	{

		ll n;
		cin >> n;
		ll ans;
		int a = 6, b = 8, c = 10;
		int t1 = 15, t2 = 20, t3 = 25;

		if (n % a == 0 || n < a)
		{
			if (n / a && n % a == 0)
			{
				ans = t1 * (n / a);
			}
			else
				ans = t1;
		}
		else if (n % b == 0 || n < b)
		{

			if (n / b && n % b == 0)
				ans = t2 * (n / b);
			else
				ans = t2;
		}
		else if (n % c == 0 || n < c)
		{
			if (n / c && n % c == 0)
				ans = t2 * (n / c);
			else
				ans = t3;
		}
		else if (n % (a + b) == 0 || n < (a + b))
		{
			ans = (t1 + t2) * ((a + b) / n);
		}
		else if (n % (a + c) == 0 || n < (a + c))
		{
			ans = (t1 + t3) * ((a + c) / n);
		}
		else if (n % (c + b) == 0 || n < (c + b))
		{
			ans = (t3 + t2) * ((c + b) / n);
		}
		else
		{
			if (n % a <= t1)
				ans = ((t1 * (n / a)) - t1 + t3);
		
		}

		cout << ans << endl;
	}
}