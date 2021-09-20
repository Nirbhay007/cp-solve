#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b;

	cin >> a >> b;

	int first_win(0), draw(0), second_win(0);
	for (int i = 1; i <= 6; i++)
	{

		if (abs(a - i) < abs(b - i))
		{
			first_win++;
		}
		else if (abs(b - i) < abs(a - i))
		{
			second_win++;
		}
		else
		{
			draw++;
		}
	}

	cout << first_win << " " << draw << " " << second_win;
}