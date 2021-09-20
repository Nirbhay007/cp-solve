#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int arr2[1001] = {0};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		arr2[arr[i]] += 1;
	}

	string ans = "YES";

	for (int i = 0; i < n; i++)
	{

		if (arr2[arr[i]] > (n + 1) / 2)
		{
			ans = "NO";
			break;
		}
	}
	cout << ans;
}