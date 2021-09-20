// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

// 	string c1, c2, c3;
// 	cin >> c1 >> c2 >> c3;
// 	string s[13] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

// 	int arr[4];
// 	for (int i = 0; i < 13; i++)
// 	{
// 		if (s[i] == c1)
// 		{
// 			arr[1] = i;
// 		}
// 		if (s[i] == c2)
// 		{
// 			arr[2] = i;
// 		}
// 		if (s[i] == c3)
// 		{
// 			arr[3] = i;
// 		}
// 	}

// 	for (int i = 1; i <= 3; i++)
// 	{
// 		sort(arr + 1, arr + 4);
// 		if (abs(arr[1] - arr[2]) == 4 && abs(arr[2] - arr[3]) == 3)
// 		{
// 			cout << "major";
// 			return 0;
// 		}
// 		if (abs(arr[1] - arr[2]) == 3 && abs(arr[2] - arr[3]) == 4)
// 		{
// 			cout << "minor";
// 			return 0;
// 		}

// 		arr[1] += 12;
// 	}
// 	cout << "strange";
// }
#include <bits/stdc++.h>
int main()
{
	int8_t a = 200;
	uint8_t b = 100;
	std::cout << (int)a << " " << (int)b;
	if (a > b)
	{
		std::cout << "greater";
	}
	else
	{
		std::cout << "less";
	}
}