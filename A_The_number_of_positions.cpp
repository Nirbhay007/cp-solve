#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, a, b;

	cin >> n >> a >> b;

	int pos = n - a;
	if (b >= pos)
	{
		cout << pos;
	}
	else
	{
		cout << b + 1;
	}
}