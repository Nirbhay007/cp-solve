#include <bits/stdc++.h>

using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int pos;
	cin >> pos;
	int left, right;
	int i = 3;
	while (i--)
	{
		cin >> left >> right;

		if (left == pos)
		{
			pos = right;
		}
		else if (right == pos)
		{
			pos = left;
		}
	}
	cout << pos;
}