#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,tc;
    string str1,str2;
    cin>>tc;
    while(tc--)
    {
        int i=1,ins,Move[110],pos=0;
        cin>>ins;
        while(i<=ins)
        {
            cin>>str1;
            if(str1=="LEFT")
            {
                Move[i]=-1;
                pos+=Move[i];
            }
            else if(str1=="RIGHT")
            {
                Move[i]=1;
                pos+=Move[i];
            }
            else
            {
                scanf("%*s %d",&p);
                Move[i]=Move[p];
                pos+=Move[p];
            }
            i++;
        }
        cout<<pos<<endl;
    }
}
