
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//program to split the number into multiple
int main()
{

	string s;
	cin >> s;
	int n;
	cin >> n;
	sort(s.begin(), s.end(), greater<int>());

	int segment = s.length() / n;

	if (segment % 2 == 0)
	{
		for (int i = 0; i < segment; i++)
		{
			cout << s[i];
		}
	}
	else
	{
		for (int i = 0; i <= segment; i++)
		{
			cout << s[i];
		}
	}
}