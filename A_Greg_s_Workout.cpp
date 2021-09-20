#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int chest = 0, biceps = 0, back = 0;
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		if (i % 3 == 0)
		{
			chest += arr[i];
		}
		if (i % 3 == 1)
		{

			biceps += arr[i];
		}
		if (i % 3 == 2)
		{

			back += arr[i];
		}
	}
	if (chest > biceps && chest > back)
	{
		cout << "chest";
	}
	else if (biceps > chest && biceps > back)
	{
		cout << "biceps";
	}
	else
	{
		cout << "back";
	}
}
