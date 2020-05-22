#include <iostream>
using namespace std;
void fun(int n)
{
    if (n==0) {cout <<0 <<endl;return;}
    else
   for (int i = 0;i<=n;i++) cout << i << " ";
   for (int i=0;i<n;i++) 
   {
       if (n-i-1) cout << n-i-1 << " ";
       else cout << n-i-1 << endl;
   }
       
}
int main()
{
    int n;
    cin >>n;
    for (int j=0;j<n+1;j++)
    {
        for (int k=0;k<2*(n-j);k++) cout << " ";
        fun(j);
    }
    for (int j=n-1;j>=0;j--)
    {
        for (int k=0;k<2*(n-j);k++) cout << " ";
        fun(j);
    }
}