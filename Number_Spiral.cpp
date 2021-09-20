
#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long
#define li long int
#define ld long double
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	lli x, y;
	cin >> tc;
	while (tc--)
	{

		cin >> x >> y;

		if (y > x)
		{
			if (y % 2 == 1)
			{
				lli r = y * y;
				cout << r - x + 1;
			}
			else
			{
				lli r = (y - 1) * (y - 1) + 1;
				cout << r + x - 1;
			}
		}
		else
		{
			if (x % 2 == 0)
			{
				lli r = x * x;
				cout << r - y + 1;
			}
			else
			{
				lli r = (x - 1) * (x - 1) + 1;
				cout << r + y - 1;
			}
		}
		cout << "\n";
	}
}