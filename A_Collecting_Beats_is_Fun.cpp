#include <bits/stdc++.h>
using namespace std;

int main()
{

	int k;
	cin >> k;

	int arr[10] = {0};

	string data;

	for (int j = 0; j < 4; j++)
	{
		cin >> data;

		for (int i = 0; i < 4; i++)
		{
			if (data[i] == '.')
			{
				continue;
			}

			arr[data[i] - '0'] += 1;
		}
	}

	bool flag = true;
	for (int i = 1; i <= 9; i++)
	{
		if (arr[i] > 2 * k)
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}