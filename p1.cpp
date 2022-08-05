#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cout << "enter a metrix row size:";
	cin >> n;

	int a = n*n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cout << a << "\t";
			a = a - 1;
		}
		cout << "\n";
		a - 4;
	}
}