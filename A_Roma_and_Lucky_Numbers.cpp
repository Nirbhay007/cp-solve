#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, k;

	cin >> n >> k;

	int data;

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int lucky = 0;

		cin >> data;
		while (data)
		{
			int rem = data % 10;
			if (rem == 4 || rem == 7)
			{
				lucky += 1;
			}

			data /= 10;
		}

		if (lucky <= k)
		{
			count += 1;
		}
	}
	cout << count;
}