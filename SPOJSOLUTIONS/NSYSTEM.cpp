// Problem: NSYSTEM
// Submission ID: 25827408
// Language: 4816

#include<bits/stdc++.h>
using namespace std;
string aq[10]={"0","1","2","3","4","5","6","7","8","9"};
int main()
{map<char,int>a;
a['m']=1000;
a['c']=100;
a['x']=10;
a['i']=1;
int t;
cin>>t;
while(t--)
{ string a1,a2;
  cin>>a1>>a2;
  int pre=1,n1=0,n2=0;
  for(auto i:a1)
  { if(isdigit(i))
      pre=i-'0';
    else
    { n1+=a[i]*pre;
      pre=1;
    }}
    pre=1;
  for(auto i:a2)
  { if(isdigit(i))
      pre=i-'0';
    else
    { n2+=a[i]*pre;
      pre=1;
    }

}
int n3=n1+n2;
//cout<<n3;
string ans;
int temp;
if(n3>=1000)
{ temp=n3/1000%10;
  if(temp>1)
   {ans+=aq[temp];
   ans+="m";}
   if(temp==1)
    ans+="m";
}
if(n3>=100)
{ temp=(n3/100)%10;
  if(temp>1)
   {ans+=aq[temp];
   ans+="c";}
   if(temp==1)
    ans+="c";
}
if(n3>=10)
{ temp=(n3/10)%10;

  if(temp>1)
   {ans+=aq[temp];
   ans+="x";}
  if(temp==1)
    ans+="x";
}
if(n3>=1)
{ temp=n3%10;
  if(temp>1)
   {ans+=aq[temp];
   ans+="i";}
   if(temp==1)
    ans+="i";
}
cout<<ans<<endl;
}

return 0;}
