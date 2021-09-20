// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// 	char arr[4][4];

// 	for (int i = 0; i < 4; i++)
// 	{
// 		for (int j = 0; j < 4; j++)
// 		{
// 			cin >> arr[i][j];
// 		}
// 	}

// 	bool flag = false;

// 	for (int i = 0; i < 3; i++)
// 	{
// 		for (int j = 0; j < 3; j++)
// 		{

// 			if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i + 1][j])
// 			{
// 				flag = true;
// 				break;
// 			}
// 			else if (arr[i + 1][j] == arr[i + 1][j + 1] && arr[i + 1][j] == arr[i][j + 1])
// 			{
// 				flag = true;
// 				break;
// 			}
// 			else if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i + 1][j + 1])
// 			{
// 				flag = true;
// 				break;
// 			}
// 		}
// 	}
// 	if (flag)
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

	int n;
	cin >> n;

	int data;
	int count_even = 0;
	int count_odd = 0;

	int index_even;
	int index_odd;

	for (int i = 1; i <= n; i++)
	{

		cin >> data;
		if ((data % 2) == 0)
		{

			count_even++;
			index_even = i;
		}
		else
		{
			count_odd++;
			index_odd = i;
		}
	}

	if (count_even == 1)
	{
		cout << index_even;
	}
	else
	{
		cout << index_odd;
	}
}