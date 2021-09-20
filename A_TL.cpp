#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b;

	cin >> a >> b;
	int arr[a];
	int arr2[b];

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < b; i++)
	{
		cin >> arr2[i];
	}

	sort(arr, arr + a);
	sort(arr2, arr2 + b);
	int min = 2 * arr[0];
	int ma = arr[a - 1];

	int both_max = max(min, ma);

	if (both_max < arr2[0])
	{
		cout << both_max;
	}
	else
	{
		cout << -1;
	}
}