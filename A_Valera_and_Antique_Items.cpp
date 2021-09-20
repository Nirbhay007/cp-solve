#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, valera_money;
	cin >> n >> valera_money;

	int item, item_money;
	int count = 0;
	int ans_count = 0;
	vector<int> res;
	for (int i = 1; i <= n; i++)
	{
		cin >> item;

		for (int i = 0; i < item; i++)
		{
			cin >> item_money;

			if (valera_money > item_money)
			{
				count++;
			}
		}
		if (count)
		{
			ans_count++;
			res.push_back(i);
		}
		count = 0;
	}
	cout << ans_count << "\n";
	for (auto x : res)
	{
		cout << x << " ";
	}
}