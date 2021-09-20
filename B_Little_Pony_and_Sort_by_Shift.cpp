#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;

	int arr[n + 1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int count = 0;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{

		if (arr[i] > arr[j])
		{
			swap(arr[i], arr[j]);
			count += 1;
		}
		i++;
		j--;
	}
	bool flag = false;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		cout << -1;
	}
	else
	{
		cout << count;
	}
}