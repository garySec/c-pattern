/*

10 
04 09 
03 05 08 
01 02 06 07

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout << "enter row:";
	cin >> n;
	string f1 = to_string((n*(n+1))/2);
	int f = f1.size();

	int a[n][n];
	int a1[n][n];
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			a[i][j] = '\0';
		}
	}
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
			ar[i] = ar[i] -i ;
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
				a[i][j] = t;
				// cout << t << "\t";
				t--;
			}
			else
			{
				a[i][j] = t;
				// cout << t << "\t";
				t++;
			}
		}
	}

	int c = 0,s = 0;

	for (int i = n-1; i >= 0; --i)
	{
		c = 0;
		s = i;
		while(c>=0 && c < n)
		{
			if (a[c][i]=='\0')
			{
				c++;
				continue;
			}
			else
			{
				cout << setw(f) << setfill('0') << a[c][i] << " ";
				c++;
			}
		}
			cout << endl;
	}
}