/*
    *
   * *
  *   *
 *     *
*********

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,k=0;
	cout << "enter :";
	cin >> n;
	string f1 = to_string((n*(n+1))/2);
	int f = f1.size();

	for (int i = n; i >= 1; --i)
	{

		for (int j = 1; j <= i; ++j)
		{
			if (j==i){
			
				cout << "*";

				for (int z = 0; z<k; ++z)
				{
					if (z==k-1)
					{
						cout << "*";
					}
					else{

						if(i==1){

						cout << "*";
						
						}

						else{

						cout << " ";
						}
					
					}

				}
				k+=2;
			}
			else 
			{
				cout << " ";

			}

		}


		cout << endl;
	}
}
