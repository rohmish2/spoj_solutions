// Problem: PQUEUE
// Submission ID: 25805481
// Language: 4796

#include<bits/stdc++.h>
using namespace std;
int pr[10];
int main()
{ int t;
  cin>>t;
  while(t--)
  {
   queue<pair<int,int>>a;
   memset(pr,0,sizeof(pr));
   int n,k;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   { int p;
     cin>>p;
      pr[p]++;
       a.push(make_pair(p,i));
   }
   int t=0;
   while(true)
   { int g;
       for(int i=9;i>0;i--)
        if(pr[i]>0)
        { g=i;
          break;}
    if(a.front().first==g)
        { t++;
          pr[g]--;
          if(a.front().second==k)
            break;
          a.pop();
        }
    else
    {
        a.push(a.front());
        a.pop();
    }

   }
  cout<<t<<endl;
  }

return 0;}
