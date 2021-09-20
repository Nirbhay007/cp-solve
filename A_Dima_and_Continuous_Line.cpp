#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n - 3; i++)
	{

		if (arr[i] < arr[i + 2] && arr[i + 1] < arr[i + 3] && arr[i + 2] < arr[i + 1] && arr[i] < arr[i + 3])
		{
			cout << "yes";
			return 0;
		}
		else if (arr[i + 3] < arr[i + 1] && arr[i + 2] < arr[i] && arr[i + 3] < arr[i + 2] && arr[i + 3] < arr[i + 2])
		{
			cout << "yes";
			return 0;
		}
	}
	cout << "no";
}