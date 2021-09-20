#include <bits/stdc++.h>

using namespace std;

int main()
{

	char type;
	cin >> type;
	string first, second;
	cin >> first >> second;

	map<char, int> m{
	    {'6', 6},
	    {'7', 7},
	    {'8', 8},
	    {'9', 9},
	    {'T', 10},
	    {'J', 11},
	    {'Q', 12},
	    {'K', 13},
	    {'A', 14}};

	char first_type = first.at(1);
	char first_rank = first.at(0);

	char second_type = second.at(1);
	char second_rank = second.at(0);

	if (first_type == second_type)
	{
		if (m[first_rank] > m[second_rank])
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}

	else if (first_type == type)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}