/*

01 
02 03 
06 05 04 
07 08 09 10 
15 14 13 12 11

*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cout << "enter row:";
	cin >> n;
	string f1 = to_string((n*(n+1))/2);
	int f = f1.size();

	int a[n][n];
	int ar[n];

	int l = 0;
	int p;
	// cout << l << " ";
	for (int i = 1; i <= n; ++i)
	{
		l = l + i; //1 3 6 10 15
		ar[i-1] = l;
	}

	for (int i = 0; i < n; ++i)
	{
		if (i%2!=0)
		{
			ar[i] = ar[i] -i; //1 2 6 7 15
		}
	}

	for (int i = 0; i < n; ++i)
	{
		// cout << ar[i] << " ";
		int t = ar[i];

		for (int j = 0; j <= i; ++j)
		{
			if (i%2==0)
			{
				cout << setw(f) << setfill('0') << t << " ";
				t--;
			}
			else
			{
				cout << setw(f) << setfill('0') << t << " ";
				t++;
			}
		}
		cout << endl;
	}
}