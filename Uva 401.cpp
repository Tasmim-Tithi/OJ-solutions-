#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int a=0,b=0;
        string r=s;
        reverse(s.begin(),s.end());
        if(r==s)
            a=1;
        for(int i=0;i<r.length();i++)
        {
            if(r[i]=='E')
            r[i]='3';
            else if(r[i]=='J')
            r[i]='L';
            else if(r[i]=='L')
            r[i]='J';
            else if(r[i]=='S')
            r[i]='2';
            else if(r[i]=='Z')
            r[i]='5';
            else if(r[i]=='2')
            r[i]='S';
            else if(r[i]=='3')
            r[i]='E';
            else if(r[i]=='5')
            r[i]='Z';
            else if(r[i]!='A'&&r[i]!='H'&&r[i]!='I'&&r[i]!='M'&&r[i]!='O'&&r[i]!='T'&&r[i]!='U'&&r[i]!='V'&&r[i]!='W'&&r[i]!='X'&&r[i]!='4'&&r[i]!='1'&&r[i]!='8'&&r[i]!='Y')
            r[i]='0';

        }
        ///cout<<r<<" "<<s<<endl;
        if(r==s)
            b=1;
        reverse(s.begin(),s.end());
        if (a==1&&b==1)
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        else if(a==0&&b==1)
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
        else if(a==1&&b==0)
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        else
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
    }
}
