#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,q,i=0,j=0;
        cin>>n>>q;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];


        for(i=0;i<q;i++)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            int arr1[b-a+1],arr2[d-c+1];
            for(j=a;j<=b;j++)
            {
                arr1[j-a]=arr[j-1];

            }
            sort(arr1,arr1+b-a+1);
            for(j=c;j<=d;j++)
            {
                arr2[j-c]=arr[j-1];
            }
            sort(arr2,arr2+d-c+1);


            int c1=0,f=0;
            for(j=0;j<=b-a;j++)
            {
                if(arr1[j]!=arr2[j])
                {
                    c1++;
                    if(c1==2)
                    {

                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                cout<<"NO";
            else
                cout<<"YES";
            cout<<endl;

        }

    }
}
