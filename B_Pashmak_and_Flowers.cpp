#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long n;
	cin >> n;
	vector<int> s;

	long long data;
	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < n; i++)
	{

		cin >> data;

		s.push_back(data);

		if (data > max)
		{
			max = data;
		}
		if (data < min)
		{
			min = data;
		}
	}

	long long cont = count(s.begin(), s.end(), s[0]);

	if (cont == n)
	{
		cout << 0 << " ";
		long long ans = (n * (n - 1)) / 2;
		cout << ans;
	}
	else
	{
		cout << max - min << " ";

		long long ans1 = count(s.begin(), s.end(), max);
		long long ans2 = count(s.begin(), s.end(), min);
		long long ans = ans1 * ans2;
		cout << ans;
	}
}