#include <bits/stdc++.h>

using namespace std;

int counting(int n)
{

	int num = 0;
	while (n)
	{
		num += n % 2;
		n /= 2;
	}
	return num;
}
int main()
{

	int n, m, k;
	cin >> n >> m >> k;
	int count = 0;

	int arr[m + 1];

	for (int i = 0; i < m + 1; i++)
	{

		cin >> arr[i];
	}

	for (int j = 0; j < m; j++)
	{
		int diff = (arr[j] ^ arr[m]);
		int count_diff = counting(diff);
		if (count_diff <= k)
		{
			count += 1;
		}
	}
	cout << count;
}