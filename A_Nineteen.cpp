#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;
	//we need t find "nineteen" n=>3 e=>3 i->1 t->1

	map<char, int> m;

	int n_count = 0;
	int e_count = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'i' || s[i] == 't')
		{
			m[s[i]] += 1;
		}

		if (s[i] == 'n')
		{
			n_count += 1;
		}
		if (s[i] == 'e')
		{
			e_count += 1;
		}
	}

	m['n'] = ((n_count - 1) / 2);

	m['e'] = e_count / 3;

	int ans = INT_MAX;
	cout << min(m['n'], min(m['e'], min(m['t'], m['i'])));
}