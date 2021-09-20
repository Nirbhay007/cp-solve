#include <iostream>

using namespace std;

int main()
{

	long long l, b;
	cin >> l >> b;

	for (int i = 1; i < 100; i++)
	{

		l = 3 * l;
		b = 2 * b;

		if (l > b)
		{
			cout << i;
			break;
		}
	}
}