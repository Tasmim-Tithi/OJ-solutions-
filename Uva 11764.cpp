#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[50],j=1,highjump=0,lowjump=0;
    scanf("%d",&t);
    while(j<=t){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i =0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1]){
                highjump++;
            }
            else if(arr[i]>arr[i+1]){
                lowjump++;
            }

        }
        printf("Case %d: %d %d\n",j,highjump,lowjump);
        j++;
        highjump=lowjump=0;
    }
}
