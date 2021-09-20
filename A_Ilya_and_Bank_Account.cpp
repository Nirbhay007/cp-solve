#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

		int a = n;
	if (n < 0)
	{

		int rem1 = n % 10;
		int rem2 = (a / 10) % 10;
		if (abs(rem1) < abs(rem2))
		{
			a /= 10;
			a /= 10;
			a = a * 10 + rem1;
			cout << a;
		}
		else
		{
			cout << a / 10;
		}
	}
	else
	{
		cout << n;
	}
}