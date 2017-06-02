#include<bits/stdc++.h>
using namespace std;
long long int sum(arrr,int l,int r);
int main()
{
    int t,i=0,maxi=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[n],min=0,c=0,a=0,b=0,max=0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];


        }
        long long int s1=0,s2=0,s=0;
        if(n%2==0)
        {

            for(i=0;i<n;i++)
            {
                if(i<n/2)
                {
                    s1+=arr[i]-(i+1);
                    s2+=arr[i]-i;
                }
                else
                {
                    s1+=arr[i]-(n-(i+1));
                    s2+=arr[i]-(n-i);
                }

            }
                if(s1>s2)
                    s=s2;
                else
                    s=s1;
        }
        else
        {
           for(i=0;i<n;i++)
            {
                if(i<=n/2)
                {
                    s+=arr[i]-(i+1);
                }
                else{
                    s+=arr[i]-(n-i);
                }
            }
        }

        cout<<s<<endl;
    }
}


long long int sum(int arr,int l,int r);
{
    n=r-l;
    if(n%2==0)
        {

            for(i=0;i<n;i++)
            {
                if(i<n/2)
                {
                    if(i+1 >arr[i])
                    s1+=arr[i]-(i+1);
                    s2+=arr[i]-i;
                }
                else
                {
                    s1+=arr[i]-(n-(i+1));
                    s2+=arr[i]-(n-i);
                }

            }
                if(s1>s2)
                    s=s2;
                else
                    s=s1;
        }
        else
        {
           for(i=0;i<n;i++)
            {
                if(i<=n/2)
                {
                    s+=arr[i]-(i+1);
                }
                else{
                    s+=arr[i]-(n-i);
                }
            }
        }
}








