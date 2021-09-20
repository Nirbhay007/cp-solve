#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int max = n;

	int arr[3] = {a, b, c};
	sort(arr, arr + 3);
	int pieces = 0;

	for (int i = 0; i < 3; i++)
	{
		if (n % arr[i] == 0)
		{
			pieces += (n / arr[i]);
			if (n > pieces)
			{
				n -= pieces;
			}
			else
			{
				n -= arr[i];
			}
		}
		else
		{

			n = n - arr[i];
			pieces += 1;
		}
		if (n == 0)
		{
			break;
		}
	}
	if (pieces > max)
	{
		cout << max;
	}
	else
	{
		cout << pieces;
	}
}