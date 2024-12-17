// Problem: ALTSEQ
// Submission ID: 25882247
// Language: 4780

#include<bits/stdc++.h>
using namespace std;
int ans;
int main()
{ int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)
      cin>>a[i];
  vector<int>b(n);
  for(int i=0;i<n;i++)
  { if(a[i]<0)
    b[i]=-1*a[i];
    else
    b[i]=a[i];
  }
  sort(b.begin(),b.end());
  unordered_map<int,int>q;
  int cnt=1;
  for(int j=0;j<n;j++)
  {  if(b[j]==0||b[j]!=b[j-1])
      {q[b[j]]=cnt;
        //cout<<b[j]<<" "<<cnt<<endl;
        cnt++;}
  }
  vector<int>neg(cnt+1,0),pos(cnt+1,0);
  for(int i=0;i<n;i++)
    {
      if(a[i]<0)
       { int maxi=0;

           for(int j=0;j<q[abs(a[i])];j++)
              {maxi=max(pos[j],maxi);}
         neg[q[abs(a[i])]]=max(maxi+1,neg[q[abs(a[i])]]);
        ans=max(maxi+1,ans);
       }
      else
      {int maxi=0;
           for(int j=0;j<q[a[i]];j++)
              maxi=max(neg[j],maxi);
         pos[q[a[i]]]=max(maxi+1,pos[q[a[i]]]);
            ans=max(maxi+1,ans);
      }

     //cout<<a[i]<<"  "<<pos[]<<endl;
    }
   cout<<ans<<endl;
  return 0;}
