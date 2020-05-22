#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <ctype.h>

using namespace std;
int issorted(int k,int b[])
{
    int t=0;
    for (int i=0;i<k-1;i++)
        {if (b[i]<=b[i+1]) t++;}
        return t;
}
int hate(int n,int a[])
{
    int b[(n/2)];
        for (int i=0;i<n/2;i++) b[i] = a[i];
    int c[n/2];for (int i=0;i<n/2;i++) c[i] = a[(i + (n/2))];
    if (issorted(n,a)==(n-1)) {return n;}
    else if (issorted(n/2,b)>issorted(n/2,c)) {
            return hate(n/2,b);
        }
    else {
    return hate(n/2,c);}
    }

int main()
{
    int n,b;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    cout << hate(n,a);
}