#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f;
        long long  sum = 0;
        cin>>f;
        while(f--)
        {
            long long  s,a,e;
            cin>>s>>a>>e;

            long long  x = s*e;
            sum+=x;
        }
         cout<<sum<<endl;
    }
    return 0;
}
