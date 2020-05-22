#include <iostream>
using namespace std;
long int max(long int a,long int b)
{
    if (a>b) return a;
    else return b;
}
int main()
{
    long int n,p=0,q=0,r=0,s=0,k=0;
    cin >> n;
    long int a[n];
    long int z=0;
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++)
    {
        if (a[i]==1) p++;
        if (a[i]==2) q++;
        if (a[i]==3) r++;
        if (a[i]==4) s++;
    }
    z += s + r + ((q*2 + max(0,p-r)+3)/4);
    
    cout << z << endl;
    return 0;
}
