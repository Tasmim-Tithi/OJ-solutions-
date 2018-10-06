#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,j=1;
    scanf("%d",&t);
    while(j<=t)
    {
       int arr[3];
       for(int i=0;i<3;i++)
       {
           scanf("%d",&arr[i]);
       }
       sort(arr,arr+3);
       printf("Case %d: %d\n",j,arr[1]);
       j++;
    }
}

