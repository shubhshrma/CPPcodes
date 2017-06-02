#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    int t,f,f1,c;
    string str;
    cin>>t;
    while(t--)
    {
        long long int time=0,i=0,s1=0,s0=0,last_one=0,f2=0,s12=-1;
        f=0;
        cin>>str;
        while(1)
        {

            f1=0;s1=s12;
            i=last_one;

            while(str[i]=='1')
            {
                if(i==str.length()-1)
                    {
                        f=1;
                        break;
                    }
                s1++;
                f1=1;

                 i++;
            }


            if(f==1)
                break;





                    if(f1=1)
                    {


                    c=--i;

                    s12=s1;
                    while(c<str.length()-1 && str[c+1]=='0' )
                        c++;
                    last_one=c;

                    while(s1>=0)
                    {
                        str[c]='1';
                        str[i]='0';

                        s1--;
                        time+=1+c-i;
                        c--;i--;


                    }
                    }
                    else
                    {

                        while(str[i]=='0')
                        {

                            i++;
                        }
                        last_one=i;

                    }

                 }

               cout<<time<<endl;
        }

    }

