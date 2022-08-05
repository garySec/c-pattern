#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter : ";
	cin >> n;

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
				cout << x + i - j + 1 << "\t";
			}
			else
			{
				cout << x - i + n <<"\t";
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