#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mondur,dep;
    double downpayment,loan;
    cin>>mondur>>downpayment>>loan>>dep;
    while(mondur>0)
    {
        int m;
        double per[101],p;
        while(dep--)
        {
           cin>>m>>p;
           for(int i=m;i<=101;i++)
                per[i]=p;
        }
        int now=0;
        double monval=loan/mondur;
        double carval=(downpayment+loan)*(1-per[0]);
        double carloan=loan;
        while(carval<carloan)
        {
            now++;
            carloan-=monval;
            carval=carval*(1-per[now]);
        }
        cout<<now<<" month";
        if(now!=1)
            cout<<"s";
        cout<<endl;
        cin>>mondur>>downpayment>>loan>>dep;
    }
}
