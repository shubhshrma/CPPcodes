#include<bits/stdc++.h>
using namespace std;
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int maximum(int first,int second,int third,int fourth)
{
    if (first > second) {
  int t = first; first = second; second = t;
}

if (third > fourth) {
  int t = third; third = fourth; fourth = t;
}
int max = second > fourth ? second : fourth;
return max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,max=0,maxc=0;
        cin>>n>>m;
        int i=0,j=0,c=0;
        int arr[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]>max)
                    max=arr[i][j];
            }
        }
        vector<int> maxi,maxj;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {

                if(arr[i][j]==max)
                {

                    maxi.push_back(i);
                    maxj.push_back(j);
                    maxc++;
                }


            }
        }
        int d5=0;
        for(i=0;i<maxc;i++)
        {
            int d1=0,d2=0,d3=0,d4=0,d51=0;
            d1=maximum(maxi[i],maxj[i]);
            d2=maximum(maxi[i],m-1-maxj[i]);
            d3=maximum(n-1-maxi[i],m-1-maxj[i]);
            d4=maximum(n-1-maxi[i],maxj[i]);
            d51=maximum(d1,d2,d3,d4);

            if(i==0)
            {
                d5=d51;
            }
            if(d51<d5)
            {
                d5=d51;
            }
        }
        cout<<d5<<endl;

    }
}
