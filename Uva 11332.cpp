#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,div,sum,mod;
    scanf("%d",&a);
    while(a)
    {
    sum = a;

    for(int i = 0; i<3;i++)
    {
        div = sum;
        sum = 0;
        while(div)
        {
            mod = div%10;
            div = div/10;
            sum+=mod;
        }
    }
    printf("%d\n",sum);
    scanf("%d",&a);
    }
}
