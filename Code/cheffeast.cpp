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
        long long int arr[n],sum=0,sump=0,sumn=0,min=0;

        vector<int> ne;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {

                sum+=arr[i];
                ne.push_back(arr[i]);
            }
            else
            {
                sump+=arr[i];
                p++;
            }
        }
        int c=0;
        sort(ne.begin(),ne.end(),greater<int>());
        while( c<ne.size() && (sump+ne[c])*(p+1) > sump*p+ne[c])
        {
            sum+=abs(ne[c]);
            sump+=ne[c];
            p++;
            c++;
        }
       sum+=sump*p;

        cout<<sum<<endl;

    }
}
