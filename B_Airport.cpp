#include <bits/stdc++.h>

using namespace std;

int main()
{

	int queue, nofp;
	cin >> queue >> nofp;
	int max = 0, min = 0;

	int arr[nofp + 1];

	for (int i = 0; i < nofp; i++)
	{
		cin >> arr[i];
	}
	int arr2[nofp + 1];

	for (int i = 0; i < nofp; i++)
	{
		arr2[i] = arr[i];
	}
	std::sort(arr, arr + nofp, greater<int>());
	int val = 0;
	while (nofp > 0)
	{

		val = arr[0];

		for (int i = 0; i < nofp; ++i)
		{

			if (arr[i] == val)
			{
				max += arr[i];
				nofp--;
				arr[i]--;
			}
			else
			{
				i = -1;
				val = arr[0];
			}

			if (nofp == 0)
				break;
		}
	}

	// int i = 0;
	// int count = 0;

	// std::sort(arr2, arr2 + nofp);
	// while (count < queue)
	// {
	// 	if (arr2[i] == 0)
	// 	{
	// 		i++;
	// 	}
	// 	else
	// 	{
	// 		min += arr2[i];
	// 		arr2[i]--;
	// 		count++;
	// 	}
	// }
	cout << max << " " << min;
}