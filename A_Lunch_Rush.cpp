#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	ll rest, ki;
	cin >> rest >> ki;

	ll maxm_joy = INT_MIN;

	ll fi, ti;

	while (rest--)
	{
		cin >> fi >> ti;

		if (ti <= ki)
		{
			maxm_joy = max(fi, maxm_joy);
		}
		else
		{
			maxm_joy = max(fi - (ti - ki), maxm_joy);
		}
	}
	cout << maxm_joy;
}