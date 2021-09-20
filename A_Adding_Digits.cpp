#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, n;

	cin >> a >> b >> n;

	bool flag = true;
	for (int i = 0; i < 10; i++)
	{

		if ((a * 10 + i) % b == 0)
		{
			flag = false;
			cout << (a * 10 + i);
			break;
		}
	}

	if (flag)
	{
		cout << -1;
	}
	else
	{
		for (int i = 0; i < n - 1; i++)
		{
			cout << 0;
		}
	}
}