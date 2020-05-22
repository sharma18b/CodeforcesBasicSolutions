#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
//1280A
int main()
{
	int l=0,g;
	int n;
	long long int t;
	cin >> n;
	std::string s;
	long long int w= 1000000007;
	for (int i=0;i<n;i++)
	{
	    cin >> g;
	    cin.ignore();
	    cin >> s;
	    //cout << s << endl;
	    /*while(l!=g)
	    {
	        l++;
	        std::string m,k;
	        //m = m.append(s,0,l);
	        //k = k.append(s,l,s.size()-l);
	        if (s[l-1]=='2') {s=s.append(s,l,s.size()-l);}
	        if (s[l-1]=='3') {s=s.append(s,l,s.size()-l);s=s.append(s,l,s.size()-);}
	   }*/
	   t = s.size();
	   int e=t;
    for (int j=0;j<g;j++)
	   {

	       if (s[i]=='2') { t = t + (t-i); if(g>e) s=s.append(s,j,s.size()-j);cout << "hello" <<endl;e=t;}
	       if (s[i]=='3') {t = t + (t-i)*2; if (g>e) s=s.append(s,j,s.size()-j);e=t}

	   }
	    //t = s.size();
	    cout <<  t%(w) << endl;
	}


}
