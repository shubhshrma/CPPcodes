#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t,n,m,i,j,k;
    cin>>t;
    string s;
    while(t--)
    {
        int f=0,f1=0,hc=0,vc=0;
        cin>>n>>m;
        cin>>s;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                f=0;
                vc=i;
                hc=j;
                for(k=0;k<s.length();k++)
                {

                    if(s[k]=='L')
                        hc--;
                    else if (s[k]=='R')
                        hc++;
                    else if(s[k]=='U')
                        vc--;
                    else
                        vc++;
                    if(hc>=m||hc<0||vc<0||vc>=n)
                    {
                        f=1;
                    }


                }
                if(f==0)
                {
                    cout<<"safe\n";
                    f1=1;
                    break;
                }



            }
        }

        if(f1==0)
        {
            cout<<"unsafe\n";
        }


    }
    }
