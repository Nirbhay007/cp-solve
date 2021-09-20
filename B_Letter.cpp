#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s1, s2;

	getline(cin, s1);
	getline(cin, s2);

	int arr[70] = {0};

	for (int i = 0; i < s1.length(); i++)
	{

		arr[s1[i] - 'A']++;
	}

	bool flag = true;
	for (int i = 0; i < s2.length(); i++)
	{

		if (arr[s2[i] - 'A'])
		{
			flag = true;
			arr[s2[i] - 'A']--;
		}
		else
		{
			flag = false;
			break;
		}
	}

	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}