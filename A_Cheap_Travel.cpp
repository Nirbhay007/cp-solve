#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int ans;
	if ((b * 1.0 / m) < a)
	{

		ans = ((n / m) * b);
		int rem = n % m;
		if (rem * a <= b)
		{

			cout << ans + (rem * a);
		}
		else
		{
			cout << ans + b;
		}
	}

	else
	{
		cout << n * a;
	}
}