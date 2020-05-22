
    #include <iostream>
    using namespace std;
    int main()
    {
        long long int n,m,a;
        cin >> n >> m >> a;
        if (m==a && n==a) cout << 1 << endl;
        else if (m==a) cout << (m/a)*(n/a + 1) << endl;
        else if (n==a) cout << (n/a)*(m/a + 1) << endl;
        else  cout << (m/a + 1)*(n/a + 1) << endl;
        return 0;
    }
