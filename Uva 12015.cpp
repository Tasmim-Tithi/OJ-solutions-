#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,maxi=0,j;
    scanf("%d",&tc);
    int i=1;
    while(i<=tc){
        string s[11];
        char p;
        int v[11];
        for(j=0;j<10;j++){
         cin>>s[j]>>v[j];
         maxi=max(maxi,v[j]);
        }
        printf("Case #%d:\n",i);

        for(j=0;j<10;j++)
        {
            if(v[j]==maxi){
                cout<<s[j]<<endl;
            }
        }
        i++;maxi=0;

    }
    return 0;
}
