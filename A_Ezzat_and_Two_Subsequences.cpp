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
		cin >> n;
		ll data;

		long double sum = 0;
		long double max = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> data;
			sum += data;
			if (data > max)
			{
				max = data;
			}
		}
		sum -= max;

		cout << setprecision(9) << fixed << max + (sum / (n - 1)) << "\n";
	}
}