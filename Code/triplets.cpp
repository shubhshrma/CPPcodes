#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,q,r,i=0,fx=0,fy=0;
        scanf("%d",&p);
                scanf("%d",&q);
                scanf("%d",&r);
        long long int sum=0;
        long long int a[p],b[q],c[r];
        for(i=0;i<p;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<q;i++)
            scanf("%lld",&b[i]);
        for(i=0;i<r;i++)
            scanf("%lld",&c[i]);
         sort(a,a+p);
         sort(b,b+q);
         sort(c,c+r);
         long long int suma[p];
         suma[0]=a[0];
         for(i=1;i<p;i++)
         {
             suma[i]=(suma[i-1]+a[i])%MOD;


         }
         long long int sumc[r];
         sumc[0]=c[0];
         for(i=1;i<r;i++)
         {
              sumc[i]=(sumc[i-1]+c[i])%MOD;

         }
        int index=0;
        int indexc=0;
         for(i=0;i<q;i++)
         {
             if(fx==0)
             {


            long long int *pa=upper_bound(a,a+p,b[i]);
            pa--;
             index=pa-a;
             }
            if(index==p-1)
            {
                fx=1;
            }
            long long int x=(suma[index]+(index+1)*b[i])%MOD;


            if(fy==0)
            {


            long long int *pc=upper_bound(c,c+r,b[i]);
            pc--;
            indexc=pc-c;
            }
            if(indexc==r-1)
            {
                fy=1;
            }

            sum+=(((sumc[indexc]+((indexc+1)*b[i])%MOD)%MOD)*x)%MOD;
            sum=sum%MOD;
         }
         printf("%lld",sum);
         printf("\n");
     }
}
