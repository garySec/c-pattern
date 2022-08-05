#include<iostream>
using namespace std;

int main()
{
	int n = 6;
	int a[n][n];
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

}