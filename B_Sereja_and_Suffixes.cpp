#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	cin >> n >> m;
	int arr1[n], arr2[n];

	set<int> s;

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		s.insert(arr1[i]);
		arr2[i] = s.size();
	}


	int data;
	for (int i = 0; i < m; i++)
	{
		cin >> data;

		cout << arr2[data - 1] << "\n";
	}
}