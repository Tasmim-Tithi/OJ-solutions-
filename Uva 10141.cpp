#include<bits/stdc++.h>
using namespace std;
int main()
{
  int req,p,cnt=1;
  cin>>req>>p;
  while(req!=0&&p!=0)
  {
      int i=0,r[p+1];
      float price[p+1],maxi=-1.0,d;
      string reqName[p+1],res;
      while(req--)
      {
          string rName;
        cin.ignore();
        getline(cin,rName);
      }
      while(i<p)
      {
          int j=0;

          getline(cin,reqName[i]);
          cin>>price[i]>>r[i];
          while(j<r[i])
          {
              string name;
              cin.ignore();
              getline(cin,name);
              j++;
          }
          if(((float)r[i]/p)>maxi)
          {
              maxi=(float)r[i]/p;
              d=price[i];
              res=reqName[i];
          }
         i++;
      }
      for(int k=p-1;k>-1;k--)
      {
          if(maxi==((float)r[k]/p)&&d<price[k])
          {
              res=reqName[k];
          }
      }
      if (cnt > 1)
			cout << endl;
      cout<<"RFP #"<<cnt<<endl<<res<<endl;
      cnt++;
      cin>>req>>p;
  }
  return 0;
}
