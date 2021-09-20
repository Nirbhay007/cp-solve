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

	int max_2 = INT_MIN;
	int ma = INT_MIN;
	for (int i = 0; i < n; i++)
	{

		if (arr[i] > ma)
		{
			ma = arr[i];
		}
		if (max_2 < ma && arr[i] > max_2)
		{
			max_2 = arr[i];
		}
	}
	cout << max_2;
}