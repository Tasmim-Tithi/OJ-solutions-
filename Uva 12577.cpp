#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    string s;
    cin>>s;
    while(s!="*")
    {
        if(s=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n",++i);
        else
            printf("Case %d: Hajj-e-Asghar\n",++i);
            cin>>s;

    }
}
