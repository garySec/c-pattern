#include<iostream>
using namespace std;

int main()
{
	int n = 5;
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
				cout << t << "\t";
				t--;
			}
			else
			{
				cout << t << "\t";
				t++;
			}
		}
		cout << endl;
	}
}