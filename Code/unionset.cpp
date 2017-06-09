#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a,i=0,j=0,sum=0;
        cin>>n>>k;
        int len[n];
        int arr[n][k];
        for(i=0;i<n;i++)
        {
            cin>>len[i];
            for(j=0;j<len[i];j++)
            {
                cin>>a;
                arr[i][j]=a;
            }

        }
        for(i=0;i<n-1;i++)
        {
             bool arr1[k+1]={0};
             int x=0;
             int sum1=0;
             int s=0;
             while(x<len[i])
             {
                arr1[arr[i][x]]=true;
                sum1++;
                x++;
             }
             s=sum1;

            for(j=i+1;j<n;j++)
            {
                sum1=s;


                if(len[j]>=k-len[i])
                {
                   x=0;
                    while(x<len[j])
                    {
                     if(arr1[arr[j][x]]==false)
                     {

                         sum1++;

                     }

                     x++;
                    }
                   if(sum1==k)
                   {
                       sum++;

                   }

                }
            }

          }

        cout<<sum<<endl;
    }
}
