#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{

	string s;
	cin >> s;

	ll mid = s.find('^');

	ll k = 0;

	ll left_weight = 0;
	ll right_weight = 0;

	for (k; k < mid; k++)
	{
		if (s[k] != '=')
		{
			left_weight += ((mid - k) * (s[k] - '0'));
		}
	}
	for (k = mid + 1; k < s.length(); k++)
	{
		if (s[k] != '=')
		{
			right_weight += ((k - mid) * (s[k] - '0'));
		}
	}

	if (left_weight > right_weight)
	{
		cout << "left";
	}
	else if (right_weight > left_weight)
	{
		cout << "right";
	}
	else
	{
		cout << "balance";
	}
}