#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,k=0;
    cin>>n;
    string singer[n+1];
    while(i<n){
        cin>>singer[i];
        i++;
    }
    string song[17];
    song[1]="Happy";
    song[2]="birthday";
    song[3]="to";
    song[4]="you";
    song[5]="Happy";
    song[6]="birthday";
    song[7]="to";
    song[8]="you";
    song[9]="Happy";
    song[10]="birthday";
    song[11]="to";
    song[12]="Rujia";
    song[13]="Happy";
    song[14]="birthday";
    song[15]="to";
    song[16]="you";
    int div=n/16;
    for(int j=0;j<div+1;j++){
        for(i=1;i<17;i++){
                if(k==n)
                 k=0;
            cout<<singer[k]<<": "<<song[i]<<endl;
            k++;
        }
    }




}
