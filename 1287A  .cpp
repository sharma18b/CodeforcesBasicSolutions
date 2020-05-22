#include <iostream>
int max(int a,int b)
{
    if (a>b) return a;
    else return b;
}

using namespace std;

int main()
{
    int  t,n,w=0,k,b[100],j=0;
    cin >> t;
    string s;
    while (t--)
    {
        j=0;w=0;
        cin >> n;
        cin >> s;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='A') {b[j] = i; j++;}
        }
        if (j==1) {cout << n-b[0]-1<<endl;}
        else {
        for (int i=0;i<j;i++)
        {
            if (i!=j-1) k = b[i+1]-b[i]-1;
            else k = n - b[i] -1;
            w = max(w,k);
        }
        cout << w << endl;
        }
            
        
    }
    

    return 0;
}
