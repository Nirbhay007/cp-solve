#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{

		int n;
		cin >> n;
		if ((360 / (180 - n)) == (360.0 / (180 - n)))
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout << "\n";
	}
}