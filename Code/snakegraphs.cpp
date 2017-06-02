#include<bits/stdc++.h>
using namespace std;

int r_search(int arr[],int l,int r,int a)
{
    int mid=(l+r)/2;
    if(r<l)
        return -1;


    else if(arr[mid]<a)
    {
        r_search(arr,mid+1,r,a);


    }
    else if(a<arr[mid])
    {
        r_search(arr,l,mid-1,a);
    }
    else if(a==arr[mid])
    {
        return mid;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        int d1;
        int i=0,a,b;
        cin>>n>>m;
        int d[n];
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            d[a]++;
            d[b]++;

        }
        int *d2=d;
        sort(d2,d2+m);
        for(i=0;i<n;i++)
        {
            d1=r_search(d2,0,n-1,i);
            cout<<d1+1<<" ";
        }


    }
}
