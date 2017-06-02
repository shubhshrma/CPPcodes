

#include<iostream>
using namespace std;
int sum(long int[],long int,long int);
int main()
{
  std::ios::sync_with_stdio(false);
  int t,i;
  long int n;
  cin>>t;
  while(t--)
  {
    long int s=0;
    cin>>n;
    long int arr[n];
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    s= sum(arr,n,s);
    cout<<s<<endl;
  }
  return 0;
}
int sum(long int a[],long int n,long int s)
{
  long int b[n];
  long int i,j;
  for(i=0;i<n;i++)
  {
    if(n%2==0)
    {
    if(i<n/2)
    {
      b[i]=i;
    }
    else
    {
      b[i]=n-i;
    }
    }
    else
    {
      if(i<(n-1)/2)
      {
        b[i]=i+1;
      }
      else
      {
        b[i]=n-i;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<b[i])
    {
      for(j=0;j<i;j++)
      {
        s=s+a[j];
      }
      long int arr[n-i];
      for(j=0;j<n-i;j++)
      {
        arr[j]=a[i+j];
      }
      sum(arr,n-i,s);
    }
  }
  for(i=0;i<n;i++)
  {
    s=s+(a[i]-b[i]);
  }
  return s;
}
