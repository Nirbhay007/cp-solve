#include <bits/stdc++.h>
using namespace std;

//TO- DO
//deletes all the vowels,
//inserts a character "." before each consonant,
//replaces all uppercase consonants with corresponding lowercase ones.

void deletevowels(string &s)
{

	for (int i = 0; i < s.length();)
	{
		if (s[i] == 'y' || s[i] == 'Y' || s[i] == 'A' || s[i] == 'a' || s[i] == 'e' || s[i] == 'E' || s[i] == 'I' || s[i] == 'i' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			s.erase(s.begin() + i);
		}
		else
		{
			i++;
		}
	}
}

int main()
{
	string s;
	cin >> s;

	deletevowels(s);

	string ans = ".";

	for (int i = 0; i < s.length(); i++)
	{

		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] + 32;
		}

		ans += s[i];
		ans += '.';
	}
	cout << ans.substr(0, ans.length() - 1);
}