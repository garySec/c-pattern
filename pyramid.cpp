#include <iostream>
using namespace std;

void triangle(int row)
{

	int n = (row*2 - 1);
	int k = 1;

	for (int i = n; i >= 0; i--)
	{
		for (int j = 0; j <=i; ++j)
		{
			if (j==i)
			{
				for (int z = 1; z <=k; z++)
				{
					cout << " + " ;
				}
				k = k + 2;
			}
			else{

				cout << "   ";
			}
		}
		cout << endl;
	}
}

int main()
{
	int row;
	cin >> row;

	triangle(row);
	return 0;
}

/*
      x
     xxx
    xxxxx
   xxxxxxx
  xxxxxxxxx
 xxxxxxxxxxx
xxxxxxxxxxxxx
*/