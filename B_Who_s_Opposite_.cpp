#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int a, b, c;
		cin >> a >> b >> c;

		int abs_diff = abs(a - b);
		int largest = abs_diff * 2;

		if (c > largest)
		{
			cout << -1 << "\n";
		}
		else if (a > b && (a < (b * 2)))
		{
			cout << -1 << "\n";
		}
		else if (a < b && (b < (a * 2)))
		{
			cout << -1 << "\n";
		}

		else if (c == (largest * 1.0 / 2))
		{
			cout << largest << "\n";
		}
		else if (c < (largest * 1.0 / 2))
		{
			cout << c + abs_diff << "\n";
		}
		else if (c > (largest * 1.0 / 2))
		{
			cout << c - abs_diff << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}
	}
}