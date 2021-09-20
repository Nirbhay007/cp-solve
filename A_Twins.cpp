#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int arr[n];
	int total = 0;
	for (int i = 0; i < n; i++)
	{

		cin >> arr[i];
		total += arr[i];
	}

	sort(arr, arr + n, greater<int>());
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		if (sum > (total - sum))
		{
			cout << i + 1;
			break;
		}
	}
}