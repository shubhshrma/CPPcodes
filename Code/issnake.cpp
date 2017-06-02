#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,num=0,pos=0,num0=0,pos0=0;
    cin>>t;
    while(t--)
    {
        int f=0,sb=0,c2=0;
        int n,c=1,aux=0;
        cin>>n;
        char arr[2][n];
        for(i=0;i<n;i++)
            cin>>arr[0][i];
        for(i=0;i<n;i++)
            cin>>arr[1][i];
         num0=2;
        for(i=0;i<n;i++)
  {
      if(arr[0][i]=='#')
        {
            if(arr[1][i]=='#')
                {
                    if(sb==0)
                    {
                        c2=1;
                    }
                    num=2;pos=0;sb=1;
                }
            else
                {num=1;pos=1;sb=1;}

        }
        else
        {
            if(arr[1][i]=='#')
                {num=1;pos=2;sb=1;}
            else
                {num=0;pos=0;}

        }

        if(num0==2)
        {
            if(num==2)
                c++;
            else if(num==1)
            {
                if(c2!=1)
                {


                if(c%2==0)
                {
                    if(aux!=pos)
                    {
                        f=1;
                        break;
                    }
                }
                else if(c%2!=0)
                {
                    if(pos==aux)
                    {
                        f=1;
                        break;
                    }
                }
                }
                else
                {
                    c2=0;
                }
                c=1;
                aux=0;
            }
            if(sb==1)
            {
                    num0=num;
                    pos0=pos;

            }

        }
        else if(num0==1)
        {
            if(num==1)
            {


                if(pos0==pos)
                {
                num0=1;
                pos0=pos;
                }
                else{
                f=1;

                break;

                }
            }

            else if(num==2)
            {
                num0=2;
                aux=pos0;

                pos0=0;


            }

            else{

                num0=0;
                pos0=0;

            }
        }


        else{
           if(num==1 || num==2)
           {
               f=1;

               break;
           }
        }
  }
      if(f==0)
        cout<<"yes\n";
      else
        cout<<"no\n";

        }
    }

