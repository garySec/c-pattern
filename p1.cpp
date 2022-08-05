/*
16 15 14 13 
12 11 10 09 
08 07 06 05 
04 03 02 01
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	cout << "enter a metrix row size:";
	cin >> n;
	string f1 = to_string((n*(n+1))/2);
	int f = f1.size();

	int a = n*n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cout <<setw(f) << setfill('0')<< a << " ";
			a = a - 1;
		}
		cout << "\n";
		a - 4;
	}
}