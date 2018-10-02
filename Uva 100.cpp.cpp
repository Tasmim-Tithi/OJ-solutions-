#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    while(scanf("%d %d",&i,&j)!=EOF)
    {
        int maxi=1;

    for(int l=min(i,j);l<=max(i,j);l++)
    {
        int cnt=1,m=l
        while(m!=1)
        {
            if(m%2==0)
                m=m/2;
            else
                m=3*m+1;
            cnt++;
        }
        }
        maxi=max(maxi,cnt);

    cout<<i<<" "<<j<<" "<<maxi<<endl;
    }
}
