#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	vector<pair<string, int>> call_all;
	vector<pair<string, int>> pizza_all;
	vector<pair<string, int>> girl_all;
	while (n--)
	{
		int a;
		cin >> a;
		string s;
		cin >> s;
		int call = 0, pizza = 0, girl = 0;
		string name;

		while (a--)
		{

			string b;
			cin >> b;
			bool call_flag = true, pizza_flag = true;
			for (int i = 0; i < b.length() - 1; i++)
			{

				if (b[i] == '-')
				{
					continue;
				}
				if (b[i + 1] == '-')
				{
					if (b[i] != b[i + 2])
					{
						call_flag = false;
					}
					if ((b[i] - '0') <= (b[i + 2] - '0'))
					{
						pizza_flag = false;
					}
				}
				else
				{
					if (b[i] != b[i + 1])
					{
						call_flag = false;
					}
					if ((b[i] - '0') <= (b[i + 1] - '0'))
					{
						pizza_flag = false;
					}
				}
			}

			if (call_flag)
			{
				call += 1;
			}
			else if (pizza_flag)
			{
				pizza += 1;
			}
			else
			{
				girl += 1;
			}
		}

		call_all.push_back(make_pair(s, call));
		girl_all.push_back(make_pair(s, girl));
		pizza_all.push_back(make_pair(s, pizza));
	}

	// 	If you want to call a taxi, you should call: Rogulenko.
	// If you want to order a pizza, you should call: Fedorov, Rogulenko, Kaluzhin.
	// If you want to go to a cafe with a wonderful girl, you should call: Melnikov.

	vector<string> max_call_all;
	vector<string> max_pizza_all;
	vector<string> max_girl_all;
	int max_call = INT_MIN;
	int max_pizza = INT_MIN;
	int max_girl = INT_MIN;
	for (auto it = call_all.begin(); it != call_all.end(); it++)
	{
		max_call = max(max_call, it->second);
	}
	for (auto it = call_all.begin(); it != call_all.end(); it++)
	{
		if (it->second == max_call)
		{
			max_call_all.push_back(it->first);
		}
	}
	for (auto it = pizza_all.begin(); it != pizza_all.end(); it++)
	{
		max_pizza = max(max_pizza, it->second);
	}
	for (auto it = pizza_all.begin(); it != pizza_all.end(); it++)
	{
		if (it->second == max_pizza)
		{
			max_pizza_all.push_back(it->first);
		}
	}
	for (auto it = girl_all.begin(); it != girl_all.end(); it++)
	{
		max_girl = max(max_girl, it->second);
	}
	for (auto it = girl_all.begin(); it != girl_all.end(); it++)
	{
		if (it->second == max_girl)
		{
			max_girl_all.push_back(it->first);
		}
	}
	cout << "If you want to call a taxi, you should call: ";
	for (int i = 0; i < max_call_all.size(); i++)
	{
		if (i == max_call_all.size() - 1)
		{
			cout << max_call_all[i] << ".";
		}
		else
		{
			cout << max_call_all[i] << ", ";
		}
	}
	cout << "\n";

	cout << "If you want to order a pizza, you should call: ";
	for (int i = 0; i < max_pizza_all.size(); i++)
	{
		if (i == max_pizza_all.size() - 1)
		{
			cout << max_pizza_all[i] << ".";
		}
		else
		{
			cout << max_pizza_all[i] << ", ";
		}
	}
	cout << "\n";
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	for (int i = 0; i < max_girl_all.size(); i++)
	{
		if (i == max_girl_all.size() - 1)
		{
			cout << max_girl_all[i] << ".";
		}
		else
		{
			cout << max_girl_all[i] << ", ";
		}
	}
}