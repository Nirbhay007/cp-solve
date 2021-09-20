#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int v[n + 1];
	int data;
	for (int i = 0; i < n; i++)
	{
		cin >> data;
		v[i] = data;
	}
	vector<int> ans;
	for (int i = 0; i < n; i++)
	{

		int num = v[i];
		bool flag = false;
		if (num == 0)
		{
			ans.push_back(0);
			continue;
		}

		while ((num / 10) != 0)
		{
			int rem = num % 10;
			if (rem == 0)
			{
				flag = true;
				break;
			}
			else
			{
				num /= 10;
			}
		}

		if (flag)
		{
			ans.push_back(v[i]);
		}
	}

	for (int i = 0; i < n; i++)
	{

		bool flag = false;
		int num = v[i];
		if (num == 0)
		{
			continue;
		}
		while ((num / 10) != 0)
		{
			int rem = num % 10;
			if (rem == 0)
			{
				flag = true;
				break;
			}
			else
			{
				num /= 10;
			}
		}
		if (flag == false)
		{
			ans.push_back(v[i]);
			break;
		}
	}
	cout << ans.size() << "\n";
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
}