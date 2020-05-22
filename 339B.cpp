#include <iostream>
using namespace std;


int main()
{
    int m,n;
    long long int z=0;
    cin >> n >> m;
    int a[m];
    for (int i=0;i<m;i++) cin >> a[i];
    for (int i=0;i<m;i++)
    {
        if (i==0) {z+=a[i]-1;}
        else if (a[i]>a[i-1]){ z+=a[i]-a[i-1];}
        else if (a[i]<a[i-1]){ z+= n - (a[i-1]-a[i]);}
        else z+=0;
    }
    cout << z << endl;
    return 0;
}
