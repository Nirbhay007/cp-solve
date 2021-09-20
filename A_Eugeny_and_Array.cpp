#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define Fast                              \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);
int main()
{
	Fast;
	ll n, m;
	cin >> n >> m;

	int arr[n + 1];

	int pos = 0;
	int neg = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		if (arr[i] < 0)
		{
			neg += 1;
		}
		else
		{
			pos += 1;
		}
	}

	ll l, r;
	vector<ll> v;
	for (int i = 1; i <= m; i++)
	{

		cin >> l >> r;
		int diff = r - l;

		if (diff % 2 == 1 && pos >= (diff + 1) / 2 && neg >= (diff + 1) / 2)
		{
			v.push_back(1);
		}
		else
		{
			v.push_back(0);
		}
	}
	for (auto x : v)
	{
		cout << x << "\n";
	}
}