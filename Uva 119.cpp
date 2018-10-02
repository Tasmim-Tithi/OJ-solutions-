#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=0;
    while(scanf("%d",&num)!=EOF)
    {
        int tk[num+1]={0};
        string name[num+1];
        for(int i=0;i<num;i++)
        {
            cin>>name[i];
        }
        for(int i=0;i<num;i++)
        {
            int t=0,n=0;
            char p;
            string give;
            cin>>give>>t>>n;
            while(n!=0&&t%n!=0)
            {
               t--;
            }
            for(int k=0;k<num;k++)
            {
                if(n!=0&&name[k]==give)
                {
                    tk[k]-=t;
                }
            }
            int div=0;
            if(n!=0)
            div =t/n;
            for(int k=0;k<n;k++)
            {
                string given;
                cin>>given;
                for(int j=0;j<num;j++)
                {
                    if(name[j]==given)
                        tk[j]+=div;
                }
            }


        }
        for(int i=0;i<num;i++)
        {
            cout<<name[i]<<" "<<tk[i]<<endl;
        }
        if(cin>>num) cout<<endl;
        else break;

    }
    return 0;
}
