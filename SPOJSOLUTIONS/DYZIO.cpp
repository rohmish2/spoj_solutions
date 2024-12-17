// Problem: DYZIO
// Submission ID: 26156486
// Language: 15760

#include<bits/stdc++.h>
using namespace std;

double  mini=12345.0;
int ans;
void fun(string a,double cur,int  &cuts,int &n)
{//cout<<n<<" "<<cur<<" "<<cuts<<endl;
    if(mini>cur)
        {mini=cur;
         ans=cuts;}
        if(mini==cur)
            ans=min(ans,cuts);
    if(n>a.size()||a[n-1]=='0')
    {

        n+=1;
     return;
    }
  n++;
 cuts++;
  fun(a,cur/2,cuts,n);
  if(n<a.size())
  { fun(a,cur/2,cuts,n);}

}

int main()
{ for(int i=0;i<10;i++)
   {
    double k;
  cin>>k;
string a;
 cin>>a;
 int n=1;
 mini=1234567;
 int cuts=0;
 fun(a,k,cuts,n);
    cout<<ans<<endl;}
return 0;}

