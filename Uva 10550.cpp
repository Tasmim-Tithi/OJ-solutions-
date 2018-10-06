#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int a,b,c,d,deg=1080,x;
        cin>>a>>b>>c>>d;
            if(a==0&&b==0&&c==0&&d==0)
                break;

           x = (a<b)?(40-b+a):(a-b);
           deg += (360*x)/40;
           x = (b<c)?(c-b):(40-b+c);
           deg+= (360*x)/40;
           x = (c<d)?(40-d+c):(c-d);
           deg+= (360*x)/40;


       cout<<deg<<endl;
    }

}
