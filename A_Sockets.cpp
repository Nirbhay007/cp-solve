#include <bits/stdc++.h>
using namespace std;

int main()
{

	int socke_filter, no_of_dev, ports;

	cin >> socke_filter >> no_of_dev >> ports;

	int filters = 0, sockets = ports;

	int arr[socke_filter];
	for (int i = 0; i < socke_filter; i++)

	{

		cin >> arr[i];
	}

	sort(arr, arr + socke_filter, greater<int>());

	while (filters < socke_filter && sockets < no_of_dev)
	{

		sockets += arr[filters] - 1;
		filters += 1;
	}

	if (sockets >= no_of_dev)
	{
		cout << filters;
	}
	else
	{
		cout << -1;
	}
}