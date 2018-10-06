#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int k;
    scanf("%d",&k);
    while(k!=0)
    {
      int m,n;
    scanf("%d %d",&m,&n);

    while(k--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x==m||y==n)
            printf("divisa\n");
        else if(x>m&&y>n)
            printf("NE\n");
        else if(x>m&&y<n)
            printf("SE\n");
        else if(x<m&&y>n)
            printf("NO\n");
        else
            printf("SO\n");
    }
    scanf("%d",&k);
    }
    return 0;

}
