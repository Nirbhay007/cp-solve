#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	string ans;
	for (int i = 0; i < n / 4; i++)
	{
		ans += "abcd";
	}

	for (int i = 'a'; i < 'a' + (n % 4); i++)
	{
		ans += i;
	}
	cout << ans;
}