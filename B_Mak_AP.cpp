#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
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
        int a,b,c;
        cin>>a>>b>>c;
        if((a+c)%(2*b)==0)cout<<"YES"<<endl;
        else if((2*b-a)>0 && (2*b-a)%c==0)cout<<"YES"<<endl;
        else if((2*b-c)>0 && (2*b-c)%a==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
