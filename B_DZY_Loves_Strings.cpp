#include <bits/stdc++.h>
using namespace std;

int main()
{

	string s;
	cin >> s;

	int n;
	cin >> n;

	int arr[26];
	for (int i = 0; i <= 25; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	int i = 0;
	for (; i < s.length(); i++)
	{

		sum += ((i + 1) * arr[s[i] - 'a']);
	}

	int maxi = *max_element(arr, arr + 25);
	int j = i + 1;

	for (; j <= (i + n); j++)
	{
		sum += (j * maxi);
	}
	cout << sum;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef unsigned long long ull;
// typedef long long ll;
// #define test       \
// 	ll tt;     \
// 	cin >> tt; \
// 	while (tt--)

// void solve()
// {
// 	string s;
// 	cin >> s;
// 	int k, ans = 0;
// 	cin >> k;
// 	int l = s.length();
// 	vector<int> v(26);
// 	for (int i = 0; i < 26; i++)
// 		cin >> v[i];
// 	for (int i = 0; i < l; i++)
// 	{
// 		ans += ((i + 1) * (v[s[i] - 97]));

// 	}
// 	int max = *max_element(v.begin(), v.end());

// 	cout << max << " " << ans << " " << l << endl;
// 	for (int i = l + 1; i <= (l + k); i++)
// 	{
// 		ans += (i * max);
// 	}
// 	cout << ans;
// }

// int main()
// {
// 	//test{
// 	solve();
// 	//}
// 	return 0;
// }