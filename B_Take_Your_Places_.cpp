#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		int arr[n];
		int coun = 0;

		if (n == 1)
		{
			cout << 0 << "\n";
			return 0;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		int i = 0;
		while (arr[i] % 2 != arr[i + 1] % 2 && i < n - 1)
		{
			swap(arr[i], arr[i + 1]);
			coun += 1;
			i++;
		}
		if (coun > 0)
		{
			cout << coun << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}
	}
}
