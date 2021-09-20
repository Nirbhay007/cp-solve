#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	ll a, b, n;
	ll modulo = 1000000007;

	cin >>
	    a >> b >> n;

	ll arr[] = {a, b, b - a, -a, -b, a - b};

	if (n > 0)
	{
		cout << (arr[(n - 1) % 6] % modulo + modulo) % modulo;
	}
	else if (n == 0)
	{
		cout << 0;
	}
	else
	{

		cout << modulo + (arr[(n - 1) % 6]);
	}
}