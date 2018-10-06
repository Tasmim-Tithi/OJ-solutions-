
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(a!=0&&b!=0)
    {
        int c[b+1]={10001},res=0;
        for(int i=0;i<b;i++)
        {
            cin>>c[i];
        }
        ///if(c[0]<c[1])
            res=a-c[0];
        for(int i=0;i<b-1;i++)
        {
            if(c[i]>c[i+1])
            {
                res=c[i]-c[i+1]+res;
            }
        }
        cout<<res<<endl;
        cin>>a>>b;


    }
}
