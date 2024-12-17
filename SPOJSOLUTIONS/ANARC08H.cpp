// Problem: ANARC08H
// Submission ID: 25804975
// Language: 34868

#include<bits/stdc++.h>
using namespace std;
int fun(int n,int d)
{ if(n==1)
  return 1;
  else
  {
      return (((d-1+fun(n-1,d))%n) +1);}
}

int main()
{ int a,b;
  cin>>a>>b;
  while(a!=0&&b!=0)
  {cout<<a<<" "<<b<<" "<<fun(a,b)<<endl;
   cin>>a>>b;
  }
return 0;}

