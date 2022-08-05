/*

* * * * * *
*         *
*         *
*         *
* * * * * *

*/

#include <iostream>
using namespace std;

void squre(int line)
{
	int n = line + 1;

	for (int i = 1; i <= n; ++i)
	{	
		for (int j = 0; j <= n; ++j)
		{
			if (i==n or i == 1)
			{
				cout << "* ";
			}
			else if(j==0 or j == n){
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; ++i){

    	int line = atoi(argv[i]);
    	squre(line);
    }
  
    return 0;
}
