#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ll n;
	cin >> n;
	int count = 0;

	for (int i = n + 1; i <= n + 16; i++)
	{
		bool flag = false;
		count++;
		int j = i;

		while (j)
		{

			int rem = j % 10;
			if (j < 0)
			{
				rem = -(j) % 10;
			}

			if (rem == 8)
			{
				flag = true;
				break;
			}
			j = j / 10;
		}
		if (flag)
		{
			break;
		}
	}
	cout << count;
}