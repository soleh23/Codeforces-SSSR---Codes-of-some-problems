#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
int r,n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[1000001];
main()
{
   freopen ("collect.in","r",stdin);
   freopen ("collect.out","w",stdout);

  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

    scanf ("%d",&n);

     for (i=1;i<=n;i++)
      scanf ("%d",&a[i]);

       scanf ("%d",&m);

        for (i=1;i<=m;i++)
         scanf ("%d",&b[i]);

         for (i=1;i<=m;i++)
          {
              l=1;
              r=n;

               while (l<r)
                {
                    u=(l+r)/2;
                    if (a[u]<b[i])l=u+1;
                    else r=u;
                }
                if (a[r]==b[i])printf ("YES\n");
                else printf ("NO\n");
          }

return 0;
}
