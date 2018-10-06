#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    while(s!="DONE")
    {

        string c;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' '||s[i]==','||s[i]=='!'||s[i]=='?'||s[i]=='.')
            continue;
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
        c+=s[i];
    }
    string temp=c;
    reverse(c.begin(),c.end());
    ///cout<<temp<<"       "<<c<<endl;
    if(temp==c)
        cout<<"You won't be eaten!"<<endl;
    else
        cout<<"Uh oh.."<<endl;
    getline(cin,s);
    }

}
