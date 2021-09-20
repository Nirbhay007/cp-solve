#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	int n, x = 0, y = 0;
	cin >> n;
	int w[n];
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
		if (w[i] == 200)
			y++;
		else
			x++;
	}
	if ((x % 2 == 0 && y % 2 == 0) || (x % 2 == 0 && y % 2 == 1 && x >= 2))
		cout << "YES";
	else
		cout << "NO";
}