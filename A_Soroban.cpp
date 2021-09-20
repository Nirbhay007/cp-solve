#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int a = n;

	if (a == 0)
	{
		cout << "O-|-OOOO";
		return 0;
	}

	while (a)
	{
		int rem = a % 10;
		if (rem < 5)
		{

			cout << "O-|"
			     << "";
			for (int i = 0; i < rem; i++)
			{
				cout << 'O' << "";
			}
			cout << '-' << "";
			for (int j = 0; j < 4 - rem; j++)
			{
				cout << "O";
			}
		}
		else
		{
			cout << "-O|"
			     << "";
			for (int i = 0; i < rem - 5; i++)
			{
				cout << "O"
				     << "";
			}
			cout << "-"
			     << "";
			for (int j = 0; j < 9 - rem; j++)
			{
				cout << "O"
				     << "";
			}
		}
		a /= 10;
		cout << "\n";
	}
}