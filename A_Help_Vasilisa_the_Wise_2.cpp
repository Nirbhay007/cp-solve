#include <bits/stdc++.h>
#define ll long long
#define get(a) \
	int a; \
	cin >> a;
#define getl(a)      \
	long long a; \
	cin >> a;
#define put(a) cout << a << " ";
#define putn(a) cout << a << "\n";
#define rep(i, k, n) for (int i = k; i < n; i++)
#define repl(i, k, n) for (long long i = k; i < n; i++)
#define vec vector<int>
#define vecl vector<long long>
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define mod 1000000007
#define pb emplace_back
#define pf first
#define ps second
#define FAST                              \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);
using namespace std;
int main()
{
	FAST;
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	rep(a, 1, 10)
	    rep(b, 1, 10)
		rep(c, 1, 10)
		    rep(d, 1, 10)
	{
		set<int> s = {a, b, c, d};
		if (s.size() == 4)
		{
			if (a + b == r1 && c + d == r2 && a + c == c1 && b + d == c2 && a + d == d1 && b + c == d2)
			{
				cout << a << " " << b << "\n"
				     << c << " " << d;
				exit(0);
			}
		}
	}
	cout << -1;
	return 0;
}
