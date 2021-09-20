#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b;
	cin >> a >> b;
	if (a < b)
	{
		cout << -1;
	}
	else if (a == b)
	{
		cout << a;
	}
	else
	{

		int ans;

		if (a % 2 == 0)
		{
			ans = a / 2;
		}
		else
		{
			ans = (a / 2) + 1;
		}

		while ((ans % b) != 0)
		{
			ans++;
		}
		cout << ans;
	}
}