/*
01 
02 09 
03 08 10 
04 07 11 14 
05 06 12 13 15
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout << "enter : ";
	cin >> n;
	string f1 = to_string((n*(n+1))/2);
	int f = f1.size();

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			int x = 0;
			
			for (int k = 0; k < j; ++k)
			{
				x = x + n - k;
			}			
			
			if (j%2==0)
			{
				cout << setw(f) <<setfill('0') << x + i - j + 1 << " ";
			}
			else
			{
				cout << setw(f) <<setfill('0')<< x - i + n <<" ";
			}
		}
		cout << "\n";
	}
}

/**  

| 1 |   |   |   |
| 2 | 7 |   |   |
| 3 | 6 | 8 |   |
| 4 | 5 | 9 | 10|

**/