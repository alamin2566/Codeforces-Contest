#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int x,n;
        cin>>x>>n;
        if(x%2==0)
        {
            if(n%4==0)
            {
                cout<<x<<endl;
            }
            else if((n-1)%4==0)
            {
                cout <<x-n<<endl;
            }
            else if((n-2)%4==0)
            {
                cout<<x+1<<endl;
            }
            else if((n-3)%4==0)
            {
                cout<<x+n+1<<endl;
            }
        }
        else
        {
            if(n%4==0)
            {
                cout<<x<<endl;
            }
            else if((n-1)%4==0)
            {
                cout <<x+n<<endl;
            }
            else if((n-2)%4==0)
            {
                cout<<x-1<<endl;
            }
            else if(n-3)
            {
                cout<<x-n- 1<<endl;
            }
        }
    }
}
