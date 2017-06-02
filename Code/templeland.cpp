
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,i=0,n,j=0,f=0,a=0,a1=0,k=0;
    char ch;
    cin>>s;


    for(i=0;i<s;i++)
    {
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++)
            cin>>arr[j];

        f=0;
        if(n%2==0)
        {
            f=1;


        }

        else
        {
            k=(n-1)/2;
            for(j=0;j<=k;j++)
            {
                a=arr[j];


                if(a!=(j+1))
                {

                    f=1;
                }
            }
            if(f==0)
            for(j=k+1;j<n;j++)
            {

                a=arr[j];
                a1=arr[j-1];
                if(a!=(a1-1))
                {

                    f=1;
                }
            }

        }
        if(f==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
