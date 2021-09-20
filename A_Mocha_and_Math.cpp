#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{

		int n;
		cin >> n;

		int data;
		cin >> data;
		int ans = data;
		for (int i = 1; i < n; i++)
		{
			cin >> data;

			ans = ans & data;
		}
		cout << ans << "\n";
		std::string a = "abcde";

		a = a.substr(2, 2);
		cout << a << endl;
	}
}