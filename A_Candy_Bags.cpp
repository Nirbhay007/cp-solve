
#include <iostream>
using namespace std;
int main()
{
	int a, n;
	cin >> n;
	a = (n * n);
	int j = a;
	int i = 1;

	while (i < j)
	{

		int l = n / 2;
		int k = n / 2;
		while (l--)
		{
			cout << i << " ";
			i++;
		}
		while (k--)
		{
			cout << j << " ";
			j--;
		}
		cout << endl;
	}
}