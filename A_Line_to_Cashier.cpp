#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int arr[n]; //5 secs for each item and 15 secs for each cashier

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int total = INT_MAX;
	int data;
	for (int i = 0; i < n; i++)
	{
		int sum = 15 * arr[i];

		for (int j = 0; j < arr[i]; j++)
		{

			cin >> data;
			sum += (5 * data);
		}

		if (sum < total)
		{
			total = sum;
		}
	}

	cout << total;
}