#include <bits/stdc++.h>

using namespace std;

int main()
{

	int p, n;
	cin >> p >> n;

	map<string, string> v;
	string a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		v[a] = b;
	}
	string data;

	string ans;

	for (int i = 0; i < p; i++)
	{
		cin >> data;
		if ((v[data]).length() < data.length())
		{
			ans += (v[data] + " ");
		}
		else
		{
			ans += (data + " ");
		}
	}
	cout << ans;
}