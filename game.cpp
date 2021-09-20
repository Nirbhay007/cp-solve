// Swayam wants to play a game with you. He has an integer with him, S, but he has hid it from you. Instead, he has shared some information about S.

// In particular, for every i such that 1 ≤ i ≤ N, he has told you the value ⌊(i*S)/K⌋. This is given to you as the array A1, A2, ..., AN, where Ai = ⌊(i*S)/K⌋. He has also told you the value of K. But since he has not shared the value of S, you want to find the largest possible range [L,R] in which S could lie. That is, find the largest possible range [L,R] such that, for any integer P ∈ [L,R], Ai is equal to ⌊(i*P)/K⌋ for all i.

// It is guaranteed that such a range always exists and is unique. You may read the sample test cases for more clarity.

// Note that ⌊x⌋ denotes floor(x), which is largest integer which is ≤ x.

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll arr[n];
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}

		ll start = arr[1] * k;

		vector<int> range;

		for (ll i = start; i < start + k; i++)
		{
			

			ll j = 1;
			bool flag = true;
			bool ok = false;

			while (j <= n)
			{

				ll val = floor((j * i) / k);

				if (val == arr[j])
				{
					flag = true;
				}
				else if (val > arr[j])
				{
					ok = true;
					break;
				}
				else
				{
					flag = false;
					break;
				}

				j++;
			}
			if (ok)
			{
				break;
			}
			if (flag)
			{

				range.push_back(i - start);
			}
		}

		cout << range[0] + start << " " << range[range.size() - 1] + start;

		cout << "\n";
	}
}