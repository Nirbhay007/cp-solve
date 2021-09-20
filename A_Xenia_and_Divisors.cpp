#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin >> n;
	set<int> s;
	int data;
	for (int i = 0; i < n; i++)
	{
		cin >> data;
		s.insert(data);
	}

	if (s.size() < 3)
	{
		cout << -1;
	}
	// else if(s.find()){

	// }
	
}