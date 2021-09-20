#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int arr[n + 1] = {0};
	int arr2[n + 1] = {0};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i] >> arr2[i];
	}
	int count = 1;
	int prev1 = arr[0];
	int prev2 = arr2[0];
	int cash = 1;

	for (int i = 1; i < n; i++)
	{
		if (prev1 == arr[i] && prev2 == arr2[i])
		{
			count += 1;
			if (count > cash)
			{
				cash = count;
			}
		}

		else
		{
			prev1 = arr[i];
			prev2 = arr2[i];
			count = 1;
		}
	}
	cout << cash;
}