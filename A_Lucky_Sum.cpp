#include <bits/stdc++.h>

using namespace std;
vector<long long> v;
long long l, r;

void go(long long x)
{
	if (x > 1000000000000000)
		return;
	if (x >= l)
		v.push_back(x);
	go(x * 10 + 4);
	go(x * 10 + 7);
}

int main()
{

	cin >> l >> r;

	vector<long long> val;

	val.push_back(4);
	val.push_back(7);
	for (long long j = 2, prv = 0; j < 11; j++)
	{
		long long s = val.size();
		for (long long i = prv; i < s; i++)
		{
			val.push_back(val[i] * 10 + 4);
			val.push_back(val[i] * 10 + 7);
		}
	}
	long long sum = 0;
	if (l == r)
	{
		for (long long i = 0; i < val.size(); i++)
		{

			if (val[i] >= l)
			{

				sum = val[i];
				break;
			}
		}
	}
	else
	{
		go(0);
		sort(v.begin(), v.end());

		for (auto x : v)
		{
			sum += (long long)x * (min(x, r) - l + 1);
			l = x + 1;
			if (l > r)
				break;
		}
	}
	cout << sum;
}