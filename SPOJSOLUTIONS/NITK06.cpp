// Problem: NITK06
// Submission ID: 25824053
// Language: 4708

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { int s;
    int key=0;
    cin>>s;
    vector<int>ar(s);
    for(int i=0;i<s;i++)
    {cin>>ar[i];}
    for(int i=s-1;i>0;i--)
    { if(ar[i]==0)
       continue;
     int a=ar[i],b=ar[i-1];
      if(a<=b)
        {ar[i]=0;
        ar[i-1]-=a;}
      else
      { key=1;
      break;}
    }

    if(ar[0]>0)
        key=1;
    if(key==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
  }


return 0;}
