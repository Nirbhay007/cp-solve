#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

	ll n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	ll min_count = 0;

	for (int i = 0; i < n; i++)
	{
		ll c = abs((i + 1) - (arr[i]));
		min_count += c;
	}

	cout << min_count;
}