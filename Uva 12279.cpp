#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    scanf("%d",&t);
    while(t!=0)
    {

        int cnt_0=0,cnt_1=0,a;
        while(t--)
        {
            scanf("%d",&a);
            if(a>0)
                cnt_1++;
            else
                cnt_0++;
        }
        int em_blnc = cnt_1-cnt_0;
        printf("Case %d: %d\n",++i,em_blnc);
        scanf("%d",&t);
    }
}
