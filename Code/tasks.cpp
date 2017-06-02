#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int x[n],c[n];
        long long int ex=0,ox=0,ec=0,oc=0;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
            if(i%2==0)
                ex+=x[i];
            else
                ox+=x[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>c[i];
            if(i%2==0)
                ec+=c[i];
            else
                oc+=c[i];
        }
        if(ex+oc >= ec+ox)
            cout<<ec+ox<<endl;
        else
            cout<<ex+oc<<endl;

    }

}
