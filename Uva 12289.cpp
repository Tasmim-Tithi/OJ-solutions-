#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    string On = "one";
    while(t--)
    {
        string s;
        cin>>s;
       if(s.length()==5)
        printf("3\n");
       else
       {
           for(int i=0;i<s.length();i++)
            if(s[i]==On[i])
                cnt++;
            if(cnt>=2)
                printf("1\n");
            else
                printf("2\n");

       }
       cnt=0;

    }
}
