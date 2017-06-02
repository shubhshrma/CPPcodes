#include<iostream>
using namespace std;
int main()
{
    int t,res,f;
    long long int n,k,i,j,p,a,sum,sum1;
    cin >>t;
    while(t--)
    {

        cin>>n>>k;
        sum=k*(k+1)/2;
        sum1=0;
        res=0;
        f=0;
        int arr[k+1]={0};
        for(i=0;i<n;i++)
        {
            cin>>p;
            for(j=0;j<p;j++)
            {
                cin>>a;
                if(arr[a]==0)
                {
                arr[a]=1;
                sum1+=a;
                }
            }
            if(sum1==sum && f==0)
            {


                if(i==n-1)
                {
                    res=2;
                    f=1;
                }
                else
                {


                res=1;
                f=1;

                }
            }

        }
       if(res==0)
        cout<<"sad\n";
       else if(res==1)
        cout<<"some\n";
       else if(res==2)
        cout<<"all\n";
    }
}
