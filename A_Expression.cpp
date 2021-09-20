#include <bits/stdc++.h>

using namespace std;

int main()
{

	int arr[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	int max = 1;
	if (arr[0] == 1 && arr[1] > 1 && arr[2] > 1)
	{

		max = (arr[0] + arr[1]) * arr[2];
	}
	else if (arr[0] != 1 && arr[1] == 1 && arr[2] != 1)
	{
		if (arr[0] < arr[2])
		{
			max = (arr[0] + arr[1]) * arr[2];
		}
		else
		{
			max = (arr[1] + arr[2]) * arr[0];
		}
	}
	else if (arr[0] != 1 && arr[1] != 1 && arr[2] == 1)
	{
		max = (arr[1] + arr[2]) * arr[0];
	}
	else if ((arr[0] == 1 && arr[1] == 1 && arr[2] != 1))
	{
		max = (arr[0] + arr[1]) * arr[2];
	}
	else if ((arr[0] != 1 && arr[1] == 1 && arr[2] == 1))
	{
		max = arr[0] * (arr[1] + arr[2]);
	}
	else if (arr[0] != 1 && arr[1] != 1 && arr[2] != 1)
	{
		max = arr[0] * arr[1] * arr[2];
	}
	else
	{
		max = arr[0] + arr[1] + arr[2];
	}
	cout << max;
}