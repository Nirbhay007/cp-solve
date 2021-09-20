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

	bool flag = true;
	for (int i = 0; i < n - 2; i++)
	{

		if (arr[i] ^ arr[i + 2] != 0)
		{
			flag = false;
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}