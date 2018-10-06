#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t!=0)
    {
       string s;
       getline(cin,s);
       int cnt=1,res=3000000,a;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]!='.')
           {
            a=i;
           break;
           }
       }
       for(int i=a;i<s.length();i++)
       {
           if(s[i]=='Z')
           {
               res =0;
               break;
           }
           else if(s[i]=='.')
           {
               cnt++;
           }
           else if(s[i]==s[a])
           {
               cnt=1;
           }
           else if(s[i]!=s[a]&&s[i]!='.')
           {
               res=min(res,cnt);
               cnt=1;
               a=i;
           }
       }
       cout<<res<<endl;
       cin>>t;
       cin.ignore();
    }
}
