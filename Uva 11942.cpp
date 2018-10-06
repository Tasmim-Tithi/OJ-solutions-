#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10],ord1=0,ord2=0,j=0,t;

    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while(n--){

          for(int i=0;i<10;i++)
           scanf("%d",&arr[i]);

        for(int i=0;i<9;i++){
            if(arr[i]<arr[i+1])
                ord1++;
            else if(arr[i]>arr[i+1])
                ord2++;
        }
            if(ord1==9||ord2==9)
                printf("Ordered\n");
            else
                printf("Unordered\n");
            ord1= 0;ord2=0;


    }


    return 0;
}
