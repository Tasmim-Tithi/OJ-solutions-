#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
scanf("%d %d",&a,&b);
while(a!=-1&&b!=-1){

    int maxi=max(a,b);
    int mini=min(a,b);
    int f=100-maxi+mini;
    int s=maxi-mini;
    if(f<s)
        cout<<f<<endl;
    else
        cout<<s<<endl;
    scanf("%d %d",&a,&b);
}
return 0;
}
