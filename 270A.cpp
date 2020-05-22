/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n,a;
   cin >> n;
   for (int i=0;i<n;i++)
   {
       cin >> a;
       if (((360)%(180-a))==0) cout << "YES" << endl;
       else cout << "NO" << endl;
   }

    return 0;
}
