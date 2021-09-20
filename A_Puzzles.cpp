#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{

	ll s;
	cin >> s;

	ll n;
	cin >> n;
	int arr[n + 1];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);
	int min_diff = INT_MAX;

	for (int i = 0; i <= n - s; i++)
	{

		if (arr[s + i - 1] - arr[i] < min_diff)
		{
			min_diff = arr[s + i - 1] - arr[i];
		}
	}
	cout << min_diff;
}