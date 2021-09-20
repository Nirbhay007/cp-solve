#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	cin >> n >> m;

	if (m > n && n % 2 == 1 || n > m && m % 2 == 1)
	{
		cout << "Akshat";
	}
	else if (m > n && n % 2 == 0 || n > m && m % 2 == 0)
	{
		cout << "Malvika";
	}
	else if (m == n && m % 2 == 0)
	{
		cout << "Malvika";
	}
	else
	{
		cout << "Akshat";
	}
}