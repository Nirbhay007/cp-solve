#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, w;
	double p;

	cin >> n >> w >> p;

	int ans = ceil((p / 100) * n) - w;
	if (ans > 0)
	{
		cout << ans;
	}
	else
	{
		cout << 0;
	}
}