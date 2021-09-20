#include <bits/stdc++.h>

using namespace std;

int main()
{

	int x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2;

	int x_diff = abs(x2 - x1);
	int y_diff = abs(y2 - y1);

	if (x_diff == y_diff)
	{
		cout << x2 << " " << y1 << " " << x1 << " " << y2;
	}

	else if (x1 == x2)
	{
		x3 = x1 + y_diff;
		x4 = x1 + y_diff;
		y3 = y1;
		y4 = y2;

		cout << x3 << " " << y3 << " " << x4 << " " << y4;
	}
	else if (y1 == y2)
	{

		y3 = y1 + x_diff;
		y4 = y1 + x_diff;
		x3 = x1;
		x4 = x2;
		cout << x3 << " " << y3 << " " << x4 << " " << y4;
	}
	else
	{
		cout << -1;
	}
}