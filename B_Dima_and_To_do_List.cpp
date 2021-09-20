#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, check;
	cin >> n >> check;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<int> ans;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] == check)
		{
			ans.push_back(arr[i - 1]);
		}
	}

	cout << *min_element(ans.begin(), ans.end());
}