#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n][n],zc=0,oc=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]==0)
                    zc++;
                else
                    oc++;
            }
        }

    }
}
