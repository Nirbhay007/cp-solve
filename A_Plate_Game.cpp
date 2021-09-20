#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, r;
	cin >> a >> b >> r;

	if (a < 2 * r || b < 2 * r)
	{
		cout << "Second";
		return 0;
	}

	string ans;
	while (true)
	{

		if (a >= 2 * r && b >= 2 * r)
		{
			ans = "First";
		}
		a = a - 2 * r;
		b -= 2 * r;
		if (a >= 2 * r && b >= 2 * r)
		{
			ans = "Second";
		}
		if (a < 2 * r || b < 2 * r)
		{
			break;
		}
	}
	cout << ans;
}