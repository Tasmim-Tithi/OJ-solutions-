#include<bits/stdc++.h>
using namespace std;
int main(){
    int bank,dep,d,c,t,cnt_0=0;
    cin>>bank>>dep;
    while(bank){
    int b[30];
    for(int i=1;i<=bank;i++){
        cin>>b[i];
    }
    while(dep--){
        cin>>d>>c>>t;
        b[d]-=t;
        b[c]+=t;

    }
    for(int i=1;i<=bank;i++){
        if(b[i]>=0)
            cnt_0++;
    }

    if(cnt_0==bank)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
        cnt_0=0;
    cin>>bank>>dep;
    }


}
