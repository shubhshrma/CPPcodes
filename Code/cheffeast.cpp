#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0,j=0,p=0;
        cin>>n;
        long long int arr[n],sum=0,sump=0,sumn=0;


        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                sum+=arr[i];
            }
            else
            {
                sump+=arr[i];
                p++;
            }
        }

            sum+=(sump*p);

        cout<<sum<<endl;

    }
}
