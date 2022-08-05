/*
01 
02 05 
03 06 08 
04 07 09 10
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,c;
	cout << "enter rows:";
	cin >> n;
	string f1 = to_string((n*(n+1))/2);
	int f = f1.size();
	int a[n][n];
	int p = 1;
	int s = 0;
	


for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < n; ++j)
	{
		if (j<i)
		{
			a[j][i] = '\0';
		}
		else
		{
			a[j][i] = p;
			p++;
		}
	}
}

	/*for (int i = 0; i < n; ++i)
	{
		c = 0;
		while(c>=0 && c < n)
		{
			if (c<i)
			{
				a[c][i] = '\0';
				c++;
			}
			else
			{
				a[c][i] = p;
				p++;
				c++;
			}
		}
	}*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) 
		{
			if (a[i][j] == '\0')
			{
				continue;
			}
			else
			{
				cout <<setw(f)<<setfill('0')<< a[i][j] << " ";
			}
		}
		cout << endl;
	}
}