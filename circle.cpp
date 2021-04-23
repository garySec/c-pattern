#include <bits/stdc++.h>
using namespace std;

int pth (int x,int y)  {
    return sqrt (pow(x,2)+pow(y,2));
 }

int main ( )  {

    int r;
    cin >> r;

    const int width=r;
    const int length=r*1.5;

    for (int y=width;y >= -width;y-=2)  {
        for (int x=-length;x <= length;x++)  {

            if ((int) pth(x,y)==r) cout << "*";
            else cout << " ";

         }
         cout << "\n";
     }

return 0;
 }