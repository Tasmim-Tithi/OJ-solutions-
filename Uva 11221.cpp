#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i=1;
    cin>>tc;
    cin.ignore();
    while(i<=tc)
    {
     string s,c;
     getline(cin,s);
     for(int j=0;j<s.length();j++)
        {
        if(s[j]==' '||s[j]==','||s[j]=='!'||s[j]=='?'||s[j]=='.'||s[j]=='('||s[j]==')')
            continue;
        if(isupper(s[j]))
            s[i]=tolower(s[j]);
        c+=s[j];
        }
        int d=sqrt(c.length());
         cout<<"Case #"<<i<<":"<<endl;
         i++;
    if(d*d==c.length())
        {
        string temp=c;
        reverse(c.begin(),c.end());

        if(temp==c)
        cout<<d<<endl;
    else
        cout<<"No magic :("<<endl;
        }
    else
    {
        cout<<"No magic :("<<endl;
    }
    }



}
