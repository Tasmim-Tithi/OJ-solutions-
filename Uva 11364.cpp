#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v,dis=0;
        cin>>v;
        int arr[v];
        for(int i=0;i<v;i++)
            cin>>arr[i];
        sort(arr,arr+v);
        for(int i=0;i<v-1;i++)
        {
            dis = dis +(arr[i+1]-arr[i]);
        }
        cout<<2*dis<<endl;
    }
}
