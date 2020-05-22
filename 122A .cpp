#include <iostream>
using namespace std;
int onlyfourandseven(int k)
{
    int w=0,t=0;
    while (k>0)
    {if ((k%10==4) || (k%10==7)) w++;
    else {t=1;break;}
        k=k/10;
    }
    if (t==1) return 0;
    else return 1;
}
int main()
{
	int n;
	cin >> n;
	if (onlyfourandseven(n)) cout << "YES" << endl;
	else if (n%4==0) cout << "YES" << endl;
	else if (n%7==0) cout << "YES" << endl;
	else if (n%16==0) cout << "YES" << endl;
	else if (n%49==0) cout << "YES" << endl;
	else if (n%47==0) cout << "YES" << endl;
	else if (n%477==0) cout << "YES" << endl;
	else cout << "NO" << endl;
}