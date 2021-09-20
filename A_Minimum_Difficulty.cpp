#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	vector<int> v(n);
	vector<int>::iterator it;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	if (n == 3)
	{
		cout << v[2] - v[0];
	}

}
