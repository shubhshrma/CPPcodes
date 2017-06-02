#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.begin()+n);

        cout<<n-arr[n-1]<<endl;

    }
}
