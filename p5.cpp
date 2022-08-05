/*

07 
06 08 
02 05 09 
01 03 04 10

*/

#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter row no. :";
	cin >> n;
	string f1 = to_string((n*(n+1))/2);
	int f = f1.size();
	int a[n][n];
	int temp[n][n];
	
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
	
for (int i = n-1; i >= 0; i--)
{
	for (int j = 0; j < n; ++j)
	{
		// cout << a[i][j] << " ";
		temp[n-i-1][j] = a[i][j];

	}
	// cout << endl;
}


for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < n; ++j)
	{
		a[i][j] = temp[i][j];
	}
}

for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < n; ++j)
	{
		for (int k = 0; k < n-1; ++k)
		{
			if (a[k+1][i]=='\0')
			{
				swap(a[k][i],a[k+1][i]);
			}
		}
	}
}

for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < n; ++j)	
	{ 
		if (a[i][j]!='\0')
		{
			cout << setw(f) <<setfill('0')<< a[i][j] << " "; 
		}
	}
	cout << endl;
}	

}