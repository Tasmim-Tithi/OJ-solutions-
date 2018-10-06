#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d",&x);
        y = (((((x*567)/9)+7492)*235)/47)-498;
        y = abs(y);
        y = y/10;
        printf("%d\n",y%10);


    }
}
