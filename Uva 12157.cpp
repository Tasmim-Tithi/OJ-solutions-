#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    scanf("%d",&tc);
    int i=1;
    while(i<=tc)
    {
        int sum1=0,sum2=0,mile ,juice;
        scanf("%d",&n);
        int sec;
        while(n--)
        {
            scanf("%d",&sec);
            mile =(sec/30)*10+10;
            sum1+=mile;
            juice=(sec/60)*15+15;
                sum2+=juice;

        }
        if(sum1>sum2)
            printf("Case %d: Juice %d\n",i,sum2);
        else if(sum1<sum2)
            printf("Case %d: Mile %d\n",i,sum1);
        else
            printf("Case %d: Mile Juice %d\n",i,sum1);


       i++;
    }
}
