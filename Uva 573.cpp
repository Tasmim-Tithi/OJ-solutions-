#include<bits/stdc++.h>
using namespace std;
int main()
{

    double H,U,D,F;
    cin>>H>>U>>D>>F;
    while(H!=0)
    {
    int day=1;
    double initial=0,disCl=0,heCli=0,heSli=0;
    double fetigo = U*F/100;
    while(true)
    {

        disCl=U;
        initial=heSli;
        heCli=initial+disCl;
        heSli=heCli-D;
        if(U>0)
        U=U-fetigo;

        if(heCli>H)
            {
                cout<<"success on day "<<day<<endl;
                break;
            }
        else if(disCl<0||heSli<0||heCli<0)
        {
            cout<<"failure on day "<<day<<endl;
            break;
        }

        day++;
        ///cout<<day<<" "<<initial<<" "<<disCl<<" "<<heCli<<" "<<heSli<<endl;


    }
    cin>>H>>U>>D>>F;
    }
return 0;
}
