#include <bits/stdc++.h>
using namespace std;

int main()
{

	string s1, s2;

	cin >> s1 >> s2;

	int move = 1;
	int j = 0;
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] == s1[j])
		{
			j++;
			move++;
		}
	}
	cout << move;
}