#include<iostream>
using namespace std;

int main()
{
	int n,c;
	cout << "enter rows:";
	cin >> n;
	int a[n][n];
	int p = 1;
	int s = 0;
	
	for (int i = 0; i < n; ++i)
	{
		c = 0;
		s = i;
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
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) 
		{
			if (a[i][j] == '\0')
			{
				cout << '\t';
			}
			else
			{
				cout << a[i][j] << "\t";
			}
		}
		cout << endl;
	}
}