#include<iostream>
using namespace std;
int main()
{
    string str;
    int j=0;
    while(getline(cin,str))
    {

        //cout<<str.length()<<endl;
        for(int i=0;i<str.length();i++)
        {
          if(str[i]=='"'&&j==0)
          {
              str.erase(str.begin()+i);
              str.insert(i,"``");
              j=1;
          }
          else if(str[i]=='"')
          {
              str.erase(str.begin()+i);
              str.insert(i,"''");
              j=0;
          }
        }
            cout<<str<<endl;
    }
    return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
long int i,count=0,l;
char s[100000];
while(gets(s))
{
l=strlen(s);
for(i=0;i<l;i++)
    {
    if(s[i]=='"')
        {
        count=count+1;
        if(count%2==1)
            printf("``");
        else
            printf("''");
        }
    else
        printf("%c",s[i]);
    }
printf("\n");
}
return 0;
}*/
