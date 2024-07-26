#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main()
{
    fast_tle;

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b;
        a=n/3;
        b=n/3;
        if(n%3==1)
        {
            a=a+1;

        }
        else if(n%3==2)
        {
            b=b+1;

        }

        cout<<a<<sp<<b<<endl;

    }

}

