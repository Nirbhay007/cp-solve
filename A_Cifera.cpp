#include <bits/stdc++.h>
using namespace std;

int main()
{

	long long n, k;
	cin >> n >> k;

	int p = 1;
	string ans = "NO";
	long long power = 1;
	int index;
	while (power < k)
	{
		power = pow(n, p);
		if (power == k)
		{
			ans = "YES";
			index = p - 1;
			break;
		}
		p++;
	}
	if (ans == "NO")
	{
		cout << ans;
	}
	else
	{
		cout << ans << "\n"
		     << index;
	}
}