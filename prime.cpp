#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int n = 1000001;
bool prime[n];
void SieveOfEratosthenes()
{
	// Create a boolean array
	// "prime[0..n]" and initialize
	// all entries it as true.
	// A value in prime[i] will
	// finally be false if i is
	// Not a prime, else true.

	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		// If prime[p] is not changed,
		// then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples
			// of p greater than or
			// equal to the square of it
			// numbers which are multiple
			// of p and are less than p^2
			// are already been marked.
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
}

ll printDivisors(ll n)
{
	// Note that this loop runs till square root
	ll count = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			// If divisors are equal, print only one
			if (n / i == i)
				count += 1;

			else // Otherwise print both
				count += 2;
		}
	}
	return count;
}

int main()
{

	ll t;
	SieveOfEratosthenes();
	cin >> t;
	ll cont;

	while (t--)
	{
		ll n;
		cin >> n;
		ll cont = 0;

		for (int i = 4; i <= n; i++)
		{
			ll fac = printDivisors(i);

			if (prime[fac])
			{
				
				if (fac > 2)
				{

					cont += 1;
				}
			}
		}

		cout << cont << "\n";
	}
}