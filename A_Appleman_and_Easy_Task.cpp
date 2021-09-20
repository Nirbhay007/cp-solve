// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

// 	int n;
// 	cin >> n;

// 	int arr[n + 1][n + 1];
// 	for (int i = 1; i <= n; i++)
// 	{
// 		for (int j = 1; j <= n; j++)
// 		{
// 			cin >> arr[i][j];
// 		}
// 	}
// 	string ans = "YES";
// 	bool even = true;
// 	int count;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		for (int j = 1; j <= n; j++)
// 		{

// 			count = 0;
// 			if (arr[i][j - 1] == 'o' && j > 1)
// 			{
// 				count++;
// 			}
// 			if (arr[i][j + 1] == 'o' && j < n)
// 			{

// 				count++;
// 			}
// 			if (arr[i - 1][j] == 'o' && i > 1)
// 			{
// 				count++;
// 			}
// 			if (arr[i + 1][j] == 'o' && i < n)
// 			{
// 				count++;
// 			}
// 			if (count % 2 == 1)
// 			{
// 				even = false;
// 				break;
// 			}
// 		}
// 	}
// 	if (even)
// 	{
// 		cout << "YES";
// 	}
// 	else
// 	{
// 		cout << "NO";
// 	}
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int i, j, n, m, cnt;
	while (cin >> n)
	{
		char a[105][105];
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}
		bool f = 1;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				
				cnt = 0;
				if (a[i][j - 1] == 'o' && j > 1)
					cnt++;

				if (a[i][j + 1] == 'o' && j < n)
					cnt++;

				if (a[i - 1][j] == 'o' && i > 1)
					cnt++;

				if (a[i + 1][j] == 'o' && i < n)
					cnt++;

				if (cnt == 1 || cnt == 3)
				{
					f = 0;
					break;
				}
			}
			if (f == 0)
				break;
		}
		if (f == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}