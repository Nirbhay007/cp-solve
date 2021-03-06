#include <bits/stdc++.h>
using namespace std;

void func(int price[], int n)
{
	if (n == 1)
		return;

	int i = 0, profit = 0;
	while (i < n - 1)
	{

		while ((i < n - 1) && (price[i + 1] <= price[i]))
			i++;

		if (i == n - 1)
			break;

		int buy = i++;

		while ((i < n) && (price[i] >= price[i - 1]))
			i++;

		int sell = i - 1;

		profit = profit + price[sell] - price[buy];
	}
	cout << profit;
}

int main()
{
	int n;
	cin >> n;

	int price[n];
	for (int i = 0; i < n; i++)
	{
		cin >> price[i];
	}

	func(price, n);

	return 0;
}