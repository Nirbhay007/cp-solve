#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	int height[n];
	for (int i = 0; i < n; i++)

	int jumps = 0;
	int x = height[0];
	for (int i = 1; i < n; i++)
	{
		if (height[i] <= x)
		{
			jumps++;
			continue;
		}

		int h = height[i];
		while (h > x)
		{
			jumps++;
		}
		jumps++;
	}
	return jumps;
}