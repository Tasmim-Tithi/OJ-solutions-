#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        string t,ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(t.begin(),t.end());
                ans+=t;
                ans+=" ";
                t.erase(t.begin(),t.end());
            }
            else
            {
                t+=s[i];
            }
        }
        reverse(t.begin(),t.end());
        ans+=t;
        cout<<ans<<endl;
    }
}
