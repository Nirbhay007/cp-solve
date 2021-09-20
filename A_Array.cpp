#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int arr[n + 1];

	vector<int> pos;
	vector<int> neg;
	vector<int> zero;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > 0)
		{

			pos.push_back(arr[i]);
		}
		else if (arr[i] < 0)
		{

			neg.push_back(arr[i]);
		}
		else
		{

			zero.push_back(arr[i]);
		}
	}

	if (neg.size() % 2 == 1 && pos.size() != 0)
	{
		cout << neg.size() << " ";
		for (auto x : neg)
		{
			cout << x << " ";
		}

		cout << "\n";
		cout << pos.size() << " ";
		for (auto x : pos)
		{
			cout << x << " ";
		}
		cout << "\n";
		cout << zero.size() << " ";
		for (auto x : zero)
		{
			cout << x << " ";
		}
	}
	else if (neg.size() % 2 == 0 && pos.size() != 0)
	{
		cout << neg.size() - 1 << " ";
		for (int i = 0; i < neg.size() - 1; i++)
		{
			cout << neg[i] << " ";
		}

		cout << "\n";
		cout << pos.size() << " ";
		for (auto x : pos)
		{
			cout << x << " ";
		}
		cout << "\n";
		cout << zero.size() + 1 << " ";
		for (auto x : zero)
		{
			cout << x << " ";
			cout << neg[neg.size() - 1];
		}
	}
	else
	{

		if (neg.size() % 2 == 0 && pos.size() == 0)
		{
			cout << neg.size() - 3 << " ";

			for (int i = 0; i < neg.size() - 3; i++)
			{
				cout << neg[i] << " ";
			}
			cout << "\n";
			cout << 2 << " " << neg[neg.size() - 3] << " " << neg[neg.size() - 2];
			cout << "\n";
			cout << zero.size() + 1 << " ";

			for (auto x : zero)
			{
				cout << x << " ";
				cout << neg[neg.size() - 1];
			}
		}
		else
		{
			cout << neg.size() - 2 << " ";

			for (int i = 0; i < neg.size() - 2; i++)
			{
				cout << neg[i] << " ";
			}
			cout << "\n";
			cout << 2 << " " << neg[neg.size() - 2] << " " << neg[neg.size() - 1];
			cout << "\n";
			cout << zero.size() << " ";

			for (auto x : zero)
			{
				cout << x << " ";
			}
		}
	}
}