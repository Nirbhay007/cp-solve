#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int check = 0;

	string s;

	for (int i = 0; i < n; i++)
	{

		cin >> s;

		if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE" || s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE")
		{
			check += 1;
		}

		else if (s.length() == 2)
		{
			if (s[0] == '1' && (s[1] != '8' && s[1] != '9'))
			{
				check += 1;
			}
		}
		else if (s.length() == 1)
		{
			if (s[0] <= '9' && s[0] >= '0')
			{
				check += 1;
			}
		}
	}
	cout << check;
}