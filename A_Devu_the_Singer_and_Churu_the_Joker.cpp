#include <bits/stdc++.h>

using namespace std;

int main()
{

	int devu, mins;
	cin >> devu >> mins;

	int sum_devu_mins = 0;
	int data;
	for (int i = 0; i < devu; i++)
	{
		cin >> data;
		sum_devu_mins += data;
	}

	if (sum_devu_mins + (10 * (devu - 1)) > mins)
	{
		cout << -1;
	}
	else
	{
		cout << (mins - sum_devu_mins) / 5;
	}
}