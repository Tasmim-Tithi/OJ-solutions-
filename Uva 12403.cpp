#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,am=0,tk;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="donate")
        {
           scanf("%d",&tk);
           am = am+tk;
        }
        else
            printf("%d\n",am);
    }

}
