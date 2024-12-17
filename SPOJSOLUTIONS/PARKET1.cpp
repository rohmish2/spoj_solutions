// Problem: PARKET1
// Submission ID: 25872477
// Language: 4788

#include<bits/stdc++.h>
using namespace std;
int main()
{ int a,b;
  cin>>a>>b;
  int area=a+b;
  int a1=1,a2=0;
  for(int i=2;i*i<=area;i++)
  {
      if(area%i==0)
      { if((i-2)*((area/i) -2)==b)
          { //cout<<i<<" "<<area<<endl;
              //cout<<i<<endl;
           a1=i;
           a2=area/i;
          break;}
      }
  }
  cout<<max(a1,a2)<<" "<<min(a1,a2);
return 0;}
