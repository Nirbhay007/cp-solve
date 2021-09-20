#include <bits/stdc++.h>

using namespace std;

long long n;

vector<int> velocity;
vector<int> location;

double rightmost_left_ep(double t)
{
	double mx = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		mx = max(mx, location[i] - (velocity[i] * t));
	}
	return mx;
}
// double rightmost_Left_ep(double t)
// {
// 	double result = INT_MIN;
// 	for (int i = 0; i < n; i++)
// 	{
// 		result = max(result, location[i] - (velocity[i] * t));
// 	}
// 	return result;
// }

double leftmost_right_ep(double t)
{
	double mn = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		mn = min(mn, location[i] + (velocity[i] * t));
	}
	return mn;
}
// double leftmost_Right_ep(double t)
// {
// 	double result = INT_MAX;
// 	for (int i = 0; i < n; i++)
// 	{
// 		result = min(result, location[i] + (velocity[i] * t));
// 	}
// 	return result;
// }

bool is_feasible(double k)
{
	return rightmost_left_ep <= leftmost_right_ep;
}

int main(int argc, char const *argv[])
{

	cin >> n;
	velocity.resize(n);
	location.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> location[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> velocity[i];
	}

	double l = 0.0;
	double h = 1e9;

	double mid;
	while ((h - l) > 1e-6)
	{

		mid = (h + l) / 2;
		if (is_feasible(mid))
		{
			h = mid;
		}
		else
		{
			l = mid;
		}
	}

	printf("%.9lf", mid);
	return 0;
}

// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <iomanip>
// #include <algorithm>
// using namespace std;

// int n;
// vector<int> Location; // initializing vector of location
// vector<int> Velocity; // initializing vecotr of velocities corresponding location

// // this function will return the value of  rightmost left endpoint
// // how much we can move toward left  within t seconds

// double rightmost_Left_ep(double t)
// {
// 	double result = INT_MIN;
// 	for (int i = 0; i < n; i++)
// 	{
// 		result = max(result, Location[i] - (Velocity[i] * t));
// 	}
// 	return result;
// }
// // this functil will return the value of leftmost right endpoint
// //how much we can move toward right with in t seconds
// double leftmost_Right_ep(double t)
// {
// 	double result = INT_MAX;
// 	for (int i = 0; i < n; i++)
// 	{
// 		result = min(result, Location[i] + (Velocity[i] * t));
// 	}
// 	return result;
// }
// //is_feasible function will return boolean value weather
// // the value k is sufficent to meet all peoples or not
// bool is_feasible(double k)
// {
// 	return rightmost_Left_ep(k) <= leftmost_Right_ep(k);
// }

// int main(int argc, char const *argv[])
// {
// 	// n is the number of people

// 	cin >> n;
// 	// resizing the location and velocity vector with n people
// 	Location.resize(n);
// 	Velocity.resize(n);

// 	//read the location array
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> Location[i];
// 	}
// 	// read the velocity array
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> Velocity[i];
// 	}
// 	// here lo is lower  and upperboound of answer
// 	double lo = 0.0, hi = 1e9;
// 	double mid;
// 	while ((hi - lo) > 1e-6)
// 	{
// 		mid = (hi + lo) / 2; // middle of our searchspace
// 		if (is_feasible(mid))
// 		{
// 			//if mid is feasible then we have find with less time
// 			//so truncate the top half of search space
// 			hi = mid;
// 		}
// 		else
// 		{
// 			//if mid is not feasible the we have to find with more time
// 			//so truncate the bottom half of the search space
// 			lo = mid;
// 		}
// 	}
// 	// atlast we have hi where all people meet which is optimal
// 	printf("%.9lf ", hi);
// 	return 0;
// }