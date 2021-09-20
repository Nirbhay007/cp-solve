#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k;
	cin >> n >> k;
	int ans;

	int sum = n * 2;
	if (sum == k)
	{
		ans = n;
	}
	else if (sum < k)
	{
		ans = n - (k - sum);
	}
	else
	{
		ans = (sum + n) - k;
	}
	if (ans < 0)
	{
		cout << 0;
	}
	else
	{
		cout << ans;
	}
}