#include <bits/stdc++.h>

using namespace std;
int count_ways(int N)
{

	if (N % 2 != 0)
		return N;
	int t[N + 1];
	for (int i = 0; i <= N; i++)
	{

		if (i <= 2)
			t[i] = i;
		else
			t[i] = t[i - 1] + (i - 1) * t[i - 2];
	}

	return t[N];
}

int main()
{

	int N;
	cin >> N;
	int res = count_ways(N);
	cout << res;
	return 0;
}