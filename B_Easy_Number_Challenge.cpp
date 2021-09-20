#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 10e5 + 5;
vector<int> arr(MAX);
int main()
{

	for (int i = 1; i <= MAX; i++)
	{
		for (int j = i; j <= MAX; j += i)
		{
			arr[j]++;
		}
	}

	int a, b, c;

	cin >> a >> b >> c;
	ll modulo = 1073741824;
	ll res = 0;

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			for (int k = 1; k <= c; k++)
			{
				int d = k * j * i;
				res += arr[d];
			}
		}
	}
	cout << res;
}