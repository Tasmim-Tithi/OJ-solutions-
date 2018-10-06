#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        string c;
        getline(cin,c);
        int i=0,m=0,f=0;
        while(i<c.size())
        {

            if(c[i]=='M')
                m++;
            else if(c[i]=='F')
                f++;

            i++;

        }
         if(f==m&&c.size()>2)
        cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }

}
