#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i=0,j=0;
	cin>>t;
	while(t--)
	{
	    int c=0,f=0;
		string str[4],str1[4];
		cin>>str[0]>>str[1]>>str[2]>>str[3];
		cin>>str1[0]>>str1[1]>>str1[2]>>str1[3];
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(str[i]==str1[j])
                {
                    c++;
                    if(c==2)
                    {
                        cout<<"similar"<<endl;
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f==0)
            cout<<"dissimilar"<<endl;
	}
}
