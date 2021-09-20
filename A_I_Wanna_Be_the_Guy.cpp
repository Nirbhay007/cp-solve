#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	set<int> s;
	int data;
	int a, b;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> data;
		if (data == 0)
		{
			continue;
		}
		s.insert(data);
	}
	cin >> b;

	for (int i = 0; i < b; i++)
	{
		cin >> data;
		if (data == 0)
		{
			continue;
		}
		s.insert(data);
	}
	if (s.size() == n)
	{
		cout << "I become the guy.";
	}
	else
	{
		cout << "Oh, my keyboard!";
	}
}