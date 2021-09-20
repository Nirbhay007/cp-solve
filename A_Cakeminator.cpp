#include <bits/stdc++.h>

using namespace std;

int main()
{

	int r, c;
	cin >> r >> c;
	string s;
	int arr[r] = {0};
	int arr2[c] = {0};

	for (int i = 0; i < r; i++)
	{
		cin >> s;
		for (int j = 0; j < c; j++)
		{
			if (s[j] == 'S')
			{
				arr[i] = arr2[j] = 1;
			}
		}
	}

	int count = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i] == 0 || arr2[j] == 0)
			{
				count += 1;
			}
		}
	}
	cout << count;
}