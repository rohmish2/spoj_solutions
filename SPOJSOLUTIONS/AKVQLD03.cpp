// Problem: AKVQLD03
// Submission ID: 26030323
// Language: 7432

#include<bits/stdc++.h>
using namespace std;
int n[1000001];
int maxi;
void update(int in,int val)
{
    while(in<=maxi)
    { n[in]+=val;
      in+=(in&(-in));

    }
}
int val(int in)
{ int sum=0;
  //cout<<"in"<<"="<<in<<endl;
  while(in>0)
  { //cout<<in<<endl;
      sum+=n[in];
    in-=(in&(-1*in));;
  }
  return sum;
}
int main()
{ int q;
  cin>>maxi>>q;
  while(q--)
  { string a;
    int t1,t2;
    cin>>a>>t1>>t2;
    if(a=="add")
      update(t1,t2);
     else
       {//cout<<t2;
       cout<<val(t2)-val(t1-1)<<endl;}


  }
return 0;}
