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
        vector< vector<int> > v;
        for(i=0;i<n;i++)
        {
            cin>>len[i];

            vector<int> v1;
            for(j=0;j<len[i];j++)
            {
                cin>>a;
                v1.push_back(a);
            }
            v.push_back(v1);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                vector<int> s;

                s=v[i];
                s.insert(s.end(),v[j].begin(),v[j].end());

                if(s.size()==k)
                {
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
}
