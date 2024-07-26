#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int cnt=0,i;
        for(i=1; cnt<n; i++)
        {
            if(i%3==0||i%10==3){
              continue;
            }
            else cnt++;
        }
        cout<<i-1<<endl;



    }


    return 0;
}
