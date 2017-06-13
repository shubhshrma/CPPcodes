#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,res=0,i=0,j=0,k=0;

    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int q,l,r,x,y;
    scanf("%d",&q);
    for(k=0;k<q;k++)
    {
        scanf("%d",&l);
        scanf("%d",&r);
        scanf("%d",&x);
        scanf("%d",&y);
        bool p[y-x+1]={0};


        int num=0;

for (i = 2; i * i <= y; ++i)
{


    for (j = max(i * i, (x + (i - 1)) / i * i); j <= y; j += i)
    {
        p[j - x] = true;
    }

}

int exp=0;
res=0;
for (i = max(x, 2); i <= y; ++i)
{
    if (!p[i - x])
    {


        for(j=l;j<=r;j++)
        {
            num=arr[j-1];
             exp=0;
            while(num%i==0)
            {
                exp++;
                num/=i;
            }
            res+=exp;
        }
    }
}






        printf("%d",res);
        printf("\n");
    }
}
