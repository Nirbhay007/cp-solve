#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int arr[n ];
	int all[3002] = {0};

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		all[arr[i]] = 1;
	}

	for (int i = 1; i <= 3002; i++)
	{
		if (all[i] == 0)
		{
			cout << i;
			break;
		}
	}
}