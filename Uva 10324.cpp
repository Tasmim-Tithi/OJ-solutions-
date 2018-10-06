#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    int t=1;
    while(getline(cin,s))
    {
        int i,j,k,m,n=1;
        cin>>i;
        cout<<"Case "<<t++<<":"<<endl;
        while(n<=i)
        {
            int z=0,o=0,mini,maxi;
            cin>>j>>k;
            mini=min(j,k);
            maxi=max(j,k);
            for(m=mini;m<=maxi;m++)
            {

                if(s[m]=='0')
                    z++;
                else
                    o++;
            }
            if(z==(maxi-mini+1)||o==(maxi-mini+1))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
            n++;
        }
        getchar();
    }
    return 0;
}
