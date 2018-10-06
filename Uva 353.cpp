#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        string dup=s,an[4000];
        int j,cnt=0,cnt1=0,l=0;
        for(int i=0;i<s.length()-1;i++)
        {
            j=2;
            while(j!=s.length()-i+1)
            {
                string sub = s.substr(i,j);

                string temp=sub;
                ///cout<<temp<<endl;
                reverse(sub.begin(),sub.end());

                if(sub == temp)
                    {
                        cnt++;
                        an[l]=temp;
                        for(int h=l-1;h>-1;h--)
                        {

                            if(an[h]==temp)
                               {
                                   cnt--;

                                   break;
                               }

                        }
                        l++;
                    }
                j++;

            }

             for(int k=i+1;k<s.length();k++)
            {
                if(s[k]!='0'&&s[k]==s[i])
                {
                    cnt1++;
                    s[i]='0';

                }
            }
        }
        cnt=cnt+s.length()-cnt1;

        cout<<"The string '"<<dup<<"' contains "<<cnt<<" palindromes."<<endl;
    }
}
