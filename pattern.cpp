// CPP program to print Trapezium Pattern
#include <iostream>

using namespace std;

int main()
{

	// 	int num = 5;
	// 	int space;

	// 	int i, j, lterm, rterm;

	// 	// The terms on the LHS of the pattern
	// 	lterm = 1;

	// 	// The terms on the RHS of the pattern
	// 	rterm = num * num + 1;

	// 	for (i = num; i > 0; i--)
	// 	{

	// 		// To print number of spaces
	// 		for (space = num; space > i; space--)
	// 			cout << " ";

	// 		for (j = 1; j <= i; j++)
	// 		{
	// 			cout << lterm;
	// 			cout << "*";
	// 			lterm++;
	// 		}
	// 		for (j = 1; j <= i; j++)
	// 		{
	// 			cout << rterm;
	// 			if (j < i)
	// 				printf("*");
	// 			rterm++;
	// 		}

	// 		// To get the next term on RHS of the Pattern

	// 		rterm = rterm - (i - 1) * 2 - 1;

	// 		cout << endl;
	// 	}
	// }

	int n;
	cin >> n;

	int num = 1;
	int num2 = 20;

	for (int i = n; i > 0; i--)
	{
		num2 = num2 - i + 1;
		for (int j = 1; j <= i; j++)
		{
			cout << num << " ";
			num++;
		}
		for (int j = 1; j <= i; j++)
		{
			cout << num2 << " ";
			num2++;
		}
		num2 = num2 - i - 1;
		cout << endl;
		for (int a = n + 1 - i; a > 0; a--)
		{
			cout << "  ";
		}
	}
}