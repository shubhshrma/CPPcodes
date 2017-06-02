#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int n,i;
    while(t--)
    {
        cin>>n;
        long long int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);

        for(i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                cout<<arr[i]<<endl;
                break;
            }
            if(arr[i]>arr[i-1]+1)
            {
                if(i==n-1)
                {
                    cout<<arr[i]<<endl;
                    break;
                }
                if(arr[i+1]>arr[i]+1)
                    cout<<arr[i]<<endl;
                else
                    cout<<arr[i-1]<<endl;
                break;
            }
        }
    }

}
