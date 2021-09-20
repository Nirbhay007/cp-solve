#include <iostream>

using namespace std;

int main()
{

	int n;
	cin >> n;

	bool ans = false;
	int data;
	while (n--)
	{
		cin >> data;
		if (data == 1)
		{
			ans = true;
		}
	}
	if (ans)
	{
		cout << "HARD";
	}
	else
	{
		cout << "EASY";
	}
}