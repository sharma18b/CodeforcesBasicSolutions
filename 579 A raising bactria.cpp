#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a;
	int j=0;
	cin >> a;
	while (a>0)
	{
	    j += a%2;
	    a = a/2;
	}
	cout << j;
}
