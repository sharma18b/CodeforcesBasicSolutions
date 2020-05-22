#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,z=0;
    
    cin >> n >> m;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i=0;i<m;i++)
    {
        if (a[i]<=0) z-=a[i];
        else break;
    }
    cout << z << endl;

    return 0;
}
