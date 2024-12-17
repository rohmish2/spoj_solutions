// Problem: FIBPOL
// Submission ID: 26144233
// Language: 4840

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { long double a,w=1;
    cin>>a;
    long double q=0,m=sqrt(((a+w)*(a+w))+4.0*a*a);
  //  cout<<a<<" "<<m<<" "<<floor(m);


    if(m-floor(m)==q)
        printf("1\n");
    else
        printf("0\n");
  }
return 0;}
