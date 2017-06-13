#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int upper_boun(long long int *arr, int len,long long int a)
{
    int low=0,high=len;
    while(low!=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<=a)
        {
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return high;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,r,i=0,fx=0,fy=0;
        cin>>p>>q>>r;
        long long int sum=0;
        long long int a[p],b[q],c[r];
        for(i=0;i<p;i++)
            cin>>a[i];
        for(i=0;i<q;i++)
            cin>>b[i];
        for(i=0;i<r;i++)
            cin>>c[i];
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


            int pa=upper_boun(a,p,b[i]);
            pa--;
            index=pa;

             }
            if(index==p-1)
            {
                fx=1;
            }
            long long int x=(suma[index]+(index+1)*b[i])%MOD;


            if(fy==0)
            {


             int pc=upper_boun(c,r,b[i]);
            pc--;
            indexc=pc;
            }
            if(indexc==r-1)
            {
                fy=1;
            }

            sum+=(((sumc[indexc]+((indexc+1)*b[i])%MOD)%MOD)*x)%MOD;
            sum=sum%MOD;
         }
         cout<<sum<<endl;
     }
}
