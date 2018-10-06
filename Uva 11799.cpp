#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+n);
        printf("Case %d: %d\n",i,arr[n-1]);
        i++;
    }
}
