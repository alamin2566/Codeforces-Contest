#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ans=a[0];
        for(int i=1;i<n;i++)
        {
            ans=max(ans,a[i]-a[i-1]);
        }
        cout<<ans<<endl;

    }
}
