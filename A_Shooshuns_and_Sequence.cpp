#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k;
	cin >> n >> k;
	int last = 0;

	vector<int> arr(n);
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (arr[i] == last)
		{
			count += 1;
		}
		else
		{
			count = 1;
		}
		last = arr[i];
	}

	if (count + k > n)
	{
		cout << n - count;
	}
	else
	{
		cout << -1;
	}
}