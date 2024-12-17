// Problem: DCEPC206
// Submission ID: 25823660
// Language: 13480

#include<bits/stdc++.h>
using namespace std;
int ma[1000000+10];
int main()
{ int t;
  cin>>t;
  while(t--)
  { int s;
    cin>>s;
    vector<long long int>q(s),fen(s+1,0);
    set<long long int>p;
    for(int i=0;i<s;i++)
    { cin>>q[i];
      p.insert(q[i]);
    }
    int cnt=1;
    for(auto i:p)
    {ma[i]=cnt++;}
    long long int ans=0;
    for(int i=0;i<s;i++)
     {  int temp=ma[q[i]];
        //cout<<temp<<endl;
        while(temp<cnt)
          { fen[temp]+=q[i];
            temp+=temp&(-1*temp);
          }
         temp=ma[q[i]]-1;
        while(temp>0)
          {
              ans+=fen[temp];
             temp-=temp&(-1*temp);
          }

     }
   cout<<ans<<endl;

  }
return 0;}
