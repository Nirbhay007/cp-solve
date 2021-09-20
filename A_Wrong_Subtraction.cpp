#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k;
	cin >> n >> k;

	int count = 0;

	while (n)
	{

		if (n % 10 == 0)
		{
			n /= 10;
			count += 1;
		}
		else
		{
			n -= 1;
			count += 1;
		}
		if (count == k)
		{
			cout << n;
			break;
		}
	}
}