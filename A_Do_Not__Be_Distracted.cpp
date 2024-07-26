#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            char z=s[i];
            while(s[i]==z)
            {
                i++;
            }
            i--;
            if(mp[z]>1)ans=1;

        }
        if(ans==1)cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
}




