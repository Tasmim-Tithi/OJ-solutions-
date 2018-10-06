#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        int i=0;
        string s,temp;
        getline(cin,s);
        temp=s;
        while(1)
        {
            string a=temp;
            stringstream g(temp);
            lli p=0;
            g>>p;
            reverse(a.begin(),a.end());
            stringstream g1(a);
            lli q=0;
            g1>>q;
            lli sum=0;
            sum=p+q;
            stringstream ss;
            ss<<sum;
            string st=ss.str();
            temp=st;
            reverse(st.begin(),st.end());
            i++;
            if(temp==st)
                break;

        }
        cout<<i<<" "<<temp<<endl;

    }
}
