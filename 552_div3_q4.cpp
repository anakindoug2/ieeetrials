#include<bits/stdc++.h>
#include<iterator>
using namespace std;

int main()
{
	long long n,a,b,a_max,b_max;;
	cin>>n>>b>>a;
  a_max=a;
  b_max=b;
  int arr[n];
  for (long i=0;i<n;i++)
    cin>>arr[i];
  long st=0;
  for(int i=0;i<n;i++)//jai mata dii
  {
    if(b>0||a>0)
    {
      if(a==a_max)
      a--;
      else if(arr[i]>0)
      {
        if(a==a_max)
        a--;
        else if(b>0){
          b--;
          a++;
        }
        else
        a--;
      }
      else if(arr[i]==0&&a>0)
        a--;
      else if(arr[i]==0&&b>0)
        b--;
      else
      break;
      st++;
    }
    else
    {
      break;
    }
  }
  cout<<st;

return 0;
}
