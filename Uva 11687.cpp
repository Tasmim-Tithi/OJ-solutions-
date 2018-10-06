#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    while(s!="END")
    {
        int a,b,res=1;
        a=s.length();
        stringstream ss;
        ss<<a;
        string str1=ss.str();
        ///cout<<str1<<endl;
        while(1)
        {
            b=str1.length();
            stringstream ss1;
            ss1<<b;
            string str2=ss1.str();
            ///cout<<str2<<endl;
            res++;
            if(str1==str2)
                break;
            else
            {
                str1=str2;

            }
        }
        if(s=="1")
            cout<<"1"<<endl;
        else
            cout<<res<<endl;

       getline(cin,s);
    }
    return 0;

}
