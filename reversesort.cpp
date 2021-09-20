// #include <bits/stdc++.h>

// using namespace std;

// void reverse_sort(int arr[], int n)
// {

// 	int pos = 0;
// 	int total_cost = 0;
// 	for (int i = 0; i < n - 1; i++)

// 	{
// 		int min = arr[i];
// 		pos = i;

// 		for (int j = i; j < n; j++)
// 		{

// 			if (arr[j] < min)
// 			{
// 				min = arr[j];
// 				pos = j;
// 			}
// 		}
// 		if (pos != i)
// 		{

// 			total_cost = total_cost + (pos - i + 1);
// 			reverse(arr + i, arr + pos + 1);
// 		}
// 		else
// 		{

// 			total_cost += 1;
// 		}
// 		for (int k = 0; k < n; k++)
// 		{
// 			std::cout << arr[k] << " ";
// 		}

// 		std::cout << endl;
// 	}

// 	cout << total_cost << "  this is our total cost";
// }

// int main()
// {

// 	int n = 4;
// 	int arr[] = {4, 2, 1, 3};
// 	reverse_sort(arr, n);
// }

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
	//Function to reverse every sub-array group of size k.
	void reverseInGroups(vector<long long> &arr, int n, int k)
	{
		// code here
		int j = 0;
		int i = k - 1;
		while (j < i)
		{
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			i--;
			j++;
		}
	}
};

// { Driver Code Starts.
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<long long> arr;
		int k;
		cin >> k;

		for (long long i = 0; i < n; i++)
		{
			long long x;
			cin >> x;
			arr.push_back(x);
		}
		Solution ob;
		ob.reverseInGroups(arr, n, k);

		for (long long i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}
