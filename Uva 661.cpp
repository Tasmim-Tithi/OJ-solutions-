#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,sq,c,maxi=0,seq=0;
    cin>>d>>sq>>c;
    while(d>0)
    {
        seq++;
        int de[d+1],sum=0,op,on_off[22];
        for(int i=1;i<22;i++)
            on_off[i]=1;
        for(int i=1;i<=d;i++)
            cin>>de[i];

        for(int i=1;i<=sq;i++)
        {
            cin>>op;
            if(maxi<=c){
            if(on_off[op]==1)
                {
                   sum+= de[op];
                   on_off[op]=0;
                }
            else
               {
                  sum-=de[op];
                  on_off[op]=1;
               }
               maxi=max(maxi,sum);
            }


        }
        if(maxi<=c)
        {
           cout<<"Sequence "<<seq<<endl<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<maxi<<" amperes."<<endl;
        }
        else
        {
            cout<<"Sequence "<<seq<<endl<<"Fuse was blown."<<endl;

        }
        cout<<endl;
        maxi=0;
        cin>>d>>sq>>c;

    }
return 0;
}




