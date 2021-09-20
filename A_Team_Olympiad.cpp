#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	vector<pair<int, int>> first;
	vector<pair<int, int>> second;
	vector<pair<int, int>> third;
	int data;
	for (int i = 1; i <= n; i++)
	{
		cin >> data;
		if (data == 1)
		{
			first.push_back(make_pair(data, i));
		}
		else if (data == 2)
		{
			second.push_back(make_pair(data, i));
		}
		else
		{
			third.push_back(make_pair(data, i));
		}
	}

	if (first.size() == 0 || second.size() == 0 || third.size() == 0)
	{
		cout << 0;
	}
	else
	{
		if (first.size() <= second.size() && first.size() <= third.size())
		{
			cout << first.size() << "\n";
			for (int i = 0; i < first.size(); i++)
			{
				cout << first[i].second << " ";
				cout << second[i].second << " ";
				cout << third[i].second << "\n";
			}
		}
		else if (second.size() <= first.size() && second.size() <= third.size())
		{
			cout << second.size() << "\n";

			for (int i = 0; i < second.size(); i++)
			{
				cout << first[i].second << " ";
				cout << second[i].second << " ";
				cout << third[i].second << "\n";
			}
		}
		else
		{
			cout << third.size() << "\n";
			for (int i = 0; i < third.size(); i++)
			{
				cout << first[i].second << " ";
				cout << second[i].second << " ";
				cout << third[i].second << "\n";
			}
		}
	}
}