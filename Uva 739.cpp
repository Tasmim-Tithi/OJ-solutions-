#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"         NAME                     SOUNDEX CODE"<<endl;
    while(getline(cin,s))
    {
        string ans;
        ans+=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='B'||s[i]=='P'||s[i]=='F'||s[i]=='V')
            {
                if(s[i-1]!='B'&&s[i-1]!='P'&&s[i-1]!='F'&&s[i-1]!='V')
                {
                    ans+='1';
                }
            }
            else if(s[i]=='C'||s[i]=='S'||s[i]=='K'||s[i]=='G'||s[i]=='J'||s[i]=='Q'||s[i]=='X'||s[i]=='Z')
            {
                if(s[i-1]!='C'&&s[i-1]!='S'&&s[i-1]!='K'&&s[i-1]!='G'&&s[i-1]!='J'&&s[i-1]!='Q'&&s[i-1]!='X'&&s[i-1]!='Z')
                {
                    ans+='2';
                }
            }
            else if(s[i]=='D'||s[i]=='T')
            {
                if(s[i-1]!='D'&&s[i-1]!='T')
                {
                    ans+='3';
                }
            }
            else if(s[i]=='L')
            {
                if(s[i-1]!='L')
                    ans+='4';
            }
            else if(s[i]=='M'||s[i]=='N')
            {
                if(s[i-1]!='M'&&s[i-1]!='N')
                    ans+='5';
            }
            else if(s[i]=='R')
            {
                if(s[i-1]!='R')
                    ans+='6';
            }

        }

        if(ans.size()<4)
        {
            int j=4-ans.size();
            for(int k=0;k<j;k++)
            {
                ans+='0';
            }

            cout<<"         "<<s;
            int sz=35-(10+s.size());
            for(int y=0;y<sz;y++)
                cout<<" ";
            cout<<ans<<endl;
        }
        else if(ans.size()>4)
        {
            int j=ans.size()-4;
            ans.erase(4,j);
            cout<<"         "<<s;
            int sz=35-(10+s.size());
            for(int y=0;y<sz;y++)
                cout<<" ";
            cout<<ans<<endl;
        }
        else
        {
            cout<<"         "<<s;
            int sz=35-(10+s.size());
            for(int y=0;y<sz;y++)
                cout<<" ";
            cout<<ans<<endl;
        }
    }
    cout<<"                   END OF OUTPUT"<<endl;
}
