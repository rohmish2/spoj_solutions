// Problem: HANGOVER
// Submission ID: 25469450
// Language: 4680

#include <iostream>

using namespace std;

int main()
{  while(1)
{ float a;
  cin>>a;
  if(a==0.0)
    return 0;
  long low=0,high=10000000,ans;
  double fun(long x);
  //f//or(int i=1;i<1000;i++)
    //cout<<fun(i)<<endl;
  while(high-low>1)
  { long mid=(low+high)>>1;
    //cout<<low<<" "<<mid<<" "<<high<<" "<<fun(mid)<<endl;
    if(fun(mid)>a)
        {high=mid;
        ans=mid;}
    else
        low=mid;
  }
cout<<(ans)<<" card(s)"<<endl;
}

    return 0;
}
double fun(long x)
{ double q=0;
    for(double i=2;i<=(double)x+1;i+=1.00000)
    {
        q+=(double)(1.0/(double)i);
    }
return q;}
