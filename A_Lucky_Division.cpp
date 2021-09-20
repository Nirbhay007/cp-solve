#include <bits/stdc++.h>
using namespace std;

int main()
{

	int s;
	cin >> s;
	string ans = "NO";
	int arr[] = {4, 7, 44, 77, 47, 74, 447, 774, 474, 744, 747, 477};
	for (int i = 0; i < 12; i++)
	{
		if (s % arr[i] == 0)
		{
			ans = "YES";
			break;
		}
	}
	cout << ans;
}