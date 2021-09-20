#include <iostream>

using namespace std;

int main()
{

	int n;
	cin >> n;

	int arr[n + 1];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int largest = 1;

	for (int i = 0; i < n - 1;)
	{
		int curr = 1;
		if (arr[i] <= arr[i + 1])
		{
			while (arr[i] <= arr[i + 1] && i < n - 1)
			{
				curr += 1;
				i++;
			}
		}
		else
		{
			i++;
		}

		largest = max(curr, largest);
	}
	cout << largest;
}