#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, k;
	cin >> n >> k;
	int count = 0;
	int data;
	while (n--)
	{
		cin >> data;

		if (data <= (5 - k))
		{
			count++;
		}
	}

	if (count)
	{
		cout << count / 3;
	}
	else
	{
		cout << 0;
	}
}