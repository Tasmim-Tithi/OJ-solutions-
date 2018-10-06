/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,dis,i=0;
    scanf("%d",&t);

    while(t--)
    {
        int col,cnt=0;
        scanf("%d",&col);
        while(i<col)
        {
            int nor,sou;
            scanf("%d %d",&nor,&sou);
            if(i==0)
                dis = nor-sou;
            else if ( dis!=nor-sou)
                cnt++;
            i++;
        }
        i=0;
        if(cnt==0)
            printf("yes\n\n");
        else
            printf("no\n\n");

    }
    return 0;
}*/

#include <cstdio>
using namespace std;

int main() {
	int tc, n, up, down;

	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);

		bool yes = true;
		scanf("%d %d", &up, &down);
		int d = up - down;

		for (int i = 0; i < n - 1; i++) {
			scanf("%d %d", &up, &down);
			if (d != up - down)
				yes = false;
		}

		if (yes)
			printf("yes\n");
		else
			printf("no\n");

		if (tc)
			printf("\n");
	}

	return 0;
}
