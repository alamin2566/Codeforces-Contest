#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,n,x;
   int odd,temp;

   cin>>test;

   while(test--)
   {
       odd=0;

       cin>>n;
       temp=2*n;

       while(temp--)
       {
           cin>>x;
           if(x%2==1)odd++;
       }
       if(odd==n)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

   }
   return 0;
}
