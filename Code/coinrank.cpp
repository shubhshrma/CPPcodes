#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int u,v,a=0;
        cin>>u>>v;
        a=v+u;
        cout<<u+1+a*(a+1)/2<<endl;
    }
}
