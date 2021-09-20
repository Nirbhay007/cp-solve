#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long n, k;
	cin >> n >> k;

	string s;
	cin >> s;
	long long arr[26] = {0};

	for (int i = 0; i < n; i++)
	{

		arr[s[i] - 'A'] += 1;
	}

	sort(arr, arr + 26, greater<int>());

	long long i = 0;
	long long count = 0;
	while (k > 0)
	{

		long long num = min(arr[i], k);
		long long p = num * num;
		count += p;

		k -= num;
		i++;
	}
	printf("%lld", count);
}