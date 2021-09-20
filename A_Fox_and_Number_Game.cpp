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

	int ans = 1;
	for (int i = 2; i <= 100; i++)
	{

		bool flag = true;
		for (int j = 0; j < n; j++)
		{
			if (arr[j] % i != 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			ans = i;
		}
	}
	cout << n * ans;
}