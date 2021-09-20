#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int arr1[n];
	int arr2[n];
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
		cin >> arr2[i];
	}

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{

			if (arr2[i] == arr1[j])
			{
				count++;
			}
		}
	}
	cout << count;
}