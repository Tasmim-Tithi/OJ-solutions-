#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,t;
    cin>>f;
    while(f!=0)
    {
        cin>>t;
        int fc[f+1],br=0;
        for(int i=0;i<f;i++)
            cin>>fc[i];
        while(t--)
        {
            int a,b,c,cnt=0;
            cin>>a>>b;
            while(a--)
            {
                cin>>c;
                for(int i=0;i<f;i++)
                {
                    if(fc[i]==c)
                     cnt++;
                }
            }
            if(cnt<b)
            {
              br=1;
            }

        }
        if(br==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        cin>>f;

    }
    return 0;
}
