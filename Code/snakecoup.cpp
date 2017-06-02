#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0,hf=0,vf=0,sb=0,pos=0,num=0,uv=0,lv=0;
        cin>>n;
        char arr[2][n];
        for(i=0;i<n;i++)
            cin>>arr[0][i];
        for(i=0;i<n;i++)
            cin>>arr[1][i];
        if(arr[0][0]=='*' && arr[1][0]=='*')
        {
            hf=1;
            sb=1;
            lv=1;
            uv=1;


        }
        else if(arr[0][0]=='*')
        {
            sb=1;
            uv=1;

        }
        else if(arr[1][0]=='*')
        {
            sb=1;
            lv=1;
        }




    for(i=1;i<n;i++)
    {
        if(arr[0][i]=='*' && arr[1][i]=='*')
        {
            num=2;
            pos=0;


        }
        else if(arr[0][i]=='*')
        {

            num=1;
            pos=1;
        }
        else if(arr[1][i]=='*')
        {

            num=1;
            pos=2;
        }
        else
        {
            num=0;
            pos=0;
        }

        if(num==2)
        {
            hf=1;
            if(lv==1 || uv==1)
            {
                vf++;
            }
            lv=1;
            uv=1;
            sb=1;


        }
        else if(num==1)
        {
                if(pos==1)
                {
                    if(uv==1)
                    {
                        vf++;
                        lv=0;
                    }
                    else if(lv==1){
                            hf=1;
                    }
                    uv=1;

                }
                else{
                    if(lv==1)
                    {
                        vf++;
                        uv=0;
                    }
                    else if(uv==1){
                        hf=1;

                    }
                    lv=1;
                }
        }




    }

        cout<<vf+hf<<endl;
    }
}
