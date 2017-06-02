#include<bits/stdc++.h>
using namespace std;




int main()
{
    int t,i,c;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long int arrl[n],arrq[q];
        for(i=0;i<n;i++)
        {
            cin>>arrl[i];
        }
         sort(arrl,arrl+n);
        vector<long long int> v=(arrl,arrl+n);
        for(i=0;i<q;i++)
        {
            cin>>arrq[i];
            c=0;

            if(arrq[i]>arrl[n-1])
            {

            }

            else if(arrq[i]<arrl[0])
            {

            }

            else
            {
                vector<int>::iterator it;
                it=lower_bound(v.begin(),v.end(),arrq[i]);
                it--;
                if(arrq[i]-(*it)>distance(v.begin(),it))
                    cout<<0;
            }
        }



    }
}
