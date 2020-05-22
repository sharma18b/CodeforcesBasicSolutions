#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int k=0;
    string a;
    cin >> a;
    for (int i=0;i<a.length();i++) 
    {
        if (a[i]=='Q') k++;
        if (a[i]=='9') k++;
        //if (a[i]=='+') k++;
        if (a[i]=='H') k++;
    }
    if (k>0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
