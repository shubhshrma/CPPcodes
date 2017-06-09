#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0,k0=1,k1=2,k2=4;
        if(n==1)
        {
            cout<<k0;
        }
        else if(n==2)
        {
            cout<<k0<<" "<<k1;
        }
        else if(n==3)
        {
            cout<<1<<" "<<2<<" "<<4;
        }
        else
        {
                cout<<1<<" "<<2<<" "<<4<<" ";
                while(c<n-3)
                {
                    k2+=3;
                    cout<<k2<<" ";

                    c++;
                }
        }
        cout<<endl;
    }

}
