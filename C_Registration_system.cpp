#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	map<string, int> m;
	string data;
	for (int i = 0; i < n; i++)
	{
		cin >> data;
		if (m[data])
		{
			cout << data << "" << m[data] << "\n";
			m[data] += 1;
		}
		else
		{
			cout << "OK"
			     << "\n";
			m[data] += 1;
		}
	}
}