#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0;
        cin>>n;
        int arr[2*n],b[n];
        for(i=0;i<2*n;i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+2*n);
        for(i=0;i<n;i++)
        {
            b[i]=arr[i+n];
        }
        cout<<b[(n-1)/2]<<endl;
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" "<<arr[n+i]<<" ";
        }
        cout<<endl;
    }
}
