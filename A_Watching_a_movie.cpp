#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k;
	cin >> n >> k;

	int l, r;

	int count_min = 0;
	int pos = 1;

	for (int i = 0; i < n; i++)
	{
		cin >> l >> r;
		while (pos + k <= l)
		{
			pos += k;
		}
		count_min += (r - pos) + 1;
		pos = r + 1;
	}
	cout << count_min;
}