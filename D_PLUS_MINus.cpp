#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;

    int t;
    cin>>t;

    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;

        long long val = (n/a);

        long long tot = (n*(n+1ll))/2ll;

        long long rem = (n-val);


        long long overlap  = (a*b)/__gcd(a,b);

        long long term = (n/overlap);
        rem += term;

        long long small = (n/b)-term;
        small*=(small+1ll);
        small/=2ll;

        long long dif = (rem*(rem+1ll))/2ll;
        tot -= dif;

        tot -= small;

        cout<<tot<<"\n";
    }
}
