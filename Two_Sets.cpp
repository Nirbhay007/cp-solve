#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	ll n;
	cin >> n;
	if (n <= 2)
	{
		cout << "NO";
	}
	else
	{
		ll check = (n * (n + 1)) / 2;
		if (check % 2 == 0)
		{

			ll sum = check / 2;
			int i = 1;
			int j = n;
			ll added = 0;
			vector<int> first;
			vector<int> second;
			while (i < j)
			{
				added += j;

				if (added > sum)
				{
					break;
				}

				first.push_back(j);
				j--;
				added += i;

				if (added > sum)
				{
					break;
				}
				first.push_back(i);

				i++;
			}
			for (i; i <= j; i++)
			{
				second.push_back(i);
			}
			cout << "YES"
			     << "\n";
			cout << first.size() << "\n";

			for (auto x : first)
			{
				cout << x << " ";
			}
			cout << "\n";

			cout << second.size() << "\n";

			for (auto y : second)
			{
				cout << y << " ";
			}
		}
		else
		{
			cout << "NO";
		}
	}
}