#include<bits/stdc++.h>
using namespace std;
int lowerbound(long long int a[],long long int key,int beg,int End);
int lowerbound(long long int a[],long long int key,int beg,int End)
{
    int val=-1;
    while(beg<=End)
    {
    int mid=(beg+End)/2;
    if(a[mid]==key)
    {
        val=mid;
        End=mid-1;
    }
    if(a[mid]>key) End=mid-1;
    if(a[mid]<key) beg=mid+1;
    }
    if(beg!=0)
        cout<<a[beg-1]<<" ";
    else
        cout<<"X ";
}
int upperbound(long long int a[],long long int key,int beg,int End);
int upperbound(long long int a[],long long int key,int beg,int End)
{
    int val=-1,n=End;
    while(beg<=End)
    {
    int mid=(beg+End)/2;
    if(a[mid]==key)
    {
        val=mid;
        beg=mid+1;
    }
    if(a[mid]>key) End=mid-1;
    if(a[mid]<key) beg=mid+1;
    }
    if(End!=n)
        cout<<a[End+1]<<endl;
    else
        cout<<"X"<<endl;
}



int main()
{
    int n,q;
    cin>>n;
    long long int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    long long int b[q+1];
     for(int i=0;i<q;i++)
        cin>>b[i];
       for(int j=0;j<q;j++)
       {
           lowerbound(a,b[j],0,n-1);
           upperbound(a,b[j],0,n-1);
       }


}
