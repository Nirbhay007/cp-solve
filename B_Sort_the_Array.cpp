#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int arr[n];
	int arr2[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr2[i] = arr[i];
	}
	sort(arr2, arr2 + n);

	int l = -1, r = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != arr2[i])
		{
			l = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] != arr2[i])
		{
			r = i;
			break;
		}
	}

	if (l == -1 && r == -1)
	{
		cout << "yes"
		     << "\n";
		cout << 1 << " " << 1;
	}
	else
	{

		reverse(arr + l, arr + r + 1);
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
			cout << "no";
		}
		else
		{
			cout << "yes"
			     << "\n";
			cout << l + 1 << " " << r + 1;
		}
	}
}
