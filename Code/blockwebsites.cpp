#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    map<string,string> unblocked;
    long long int n,i=0,j=0,c=0,f=0;
    string s;
    char C;
    cin>>n;
    string s1[n],res[n];
    for(i=0;i<n;i++)
    {
        cin>>C;
        if(C=='+')
        {
            cin>>s;
            for(j=0;j<s.length();j++)
            {
                unblocked[s.substr(0,j+1)]=s.substr(0,j+1);
            }
        }


        else
        {
            cin>>s1[c++];
        }


    }

    for(i=0;i<c;i++)
    {
        f=0;

            for(j=0;j<s1[i].length();j++)
            {
                string temp=s1[i].substr(0,j+1);
                if(unblocked.find(temp)==unblocked.end())
                {
                    res[i]=temp;
                    f=1;

                }
                if(f==1)
                    break;

            }
           if(f==0)
           {
               cout<<-1;
               return 0;
           }
    }
    sort(res,res+c);
    cout<<c<<endl;
    for(i=0;i<c;i++)
        cout<<res[i]<<endl;


}
