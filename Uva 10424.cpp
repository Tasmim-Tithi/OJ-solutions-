#include<bits/stdc++.h>
using namespace std;
int main()
{
    string gf,bf;
    while(getline(cin,gf))
    {
        getline(cin,bf);
        int sum1=0,sum2=0;
        double res;
        for(int i=0;i<gf.length();i++)
        {
            if(islower(gf[i]))
                sum1+=gf[i]-'a'+1;
            else if(isupper(gf[i]))
                sum1+=gf[i]-'A'+1;
        }
        for(int i=0;i<bf.length();i++)
        {
            if(isupper(bf[i]))
                sum2+=bf[i]-'A'+1;
            else if(islower(bf[i]))
                sum2+=bf[i]-'a'+1;
        }
        if(sum1%9==0)
            sum1=9;
        else
            sum1=sum1%9;
        if(sum2%9==0)
            sum2=9;
        else
            sum2=sum2%9;
        res=(min(sum1,sum2)*100.0)/max(sum1,sum2);
        printf("%.2lf %c\n",res,'%');

    }
}
