#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int sum = 0;
	int data;
	int a = n;
	while (n--)
	{
		cin >> data;
		sum += data;
	}

	if (sum % a == 0)
	{
		cout << a;
	}
	else
	{
		cout << a - 1;
	}
}