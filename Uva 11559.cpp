#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,B,H,W,sm;
    while(scanf("%d %d %d %d",&N,&B,&H,&W)!=EOF)
    {
        int k=0;
        sm =B+1;
        while(k<H){
        int p,a[W];
        scanf("%d",&p);
        for(int i = 0;i<W;i++)
        {
           scanf("%d",&a[i]);
        }
            for(int i=0;i<W;i++)
            {
                if(a[i]>=N)
                {
                    int l =p*N;
                    if(l<=B)
                    {
                     if(l<sm)
                            sm = l;
                    }
                }
            }
            k++;
        }
        if(sm==B+1)
            printf("stay home\n");
        else
            printf("%d\n",sm);


    }
}
