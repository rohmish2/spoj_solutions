// Problem: ACTIV
// Submission ID: 26062624
// Language: 25668

#include <bits/stdc++.h>
#define mod 100000000
using namespace std;
long  cnt;
void  put(vector<long >&fen,long  in,long  val)
{ while(in<=cnt+5)
    {
      fen[in]=(fen[in]+val)%mod;
      
      in+=(in&-in);
    }
}
long  sum(vector<long >&fen,long  in)
{ long  s=0;
  while(in>0)
  {s=(s+fen[in])%mod;
   
   in-=(in&-in);
  }
 return s;
}
int main()
{
 int s;
 scanf("%d",&s);
 while(s!=-1)
 { unordered_map<long ,long >a;
   vector<pair<long ,long >>as(s),ca(s);
   //scan plus data compression
    cnt=1;
   
   set<long >b;
   for(int i=0;i<s;i++)
   { scanf("%ld%ld",&as[i].first,&as[i].second);
     b.insert(as[i].first);b.insert(as[i].second);
   }

    for(auto i:b)
        a[i]=cnt++;

    for(int i=0;i<s;i++)
     {ca[i].first=a[as[i].first];
      ca[i].second=a[as[i].second];}
    sort(ca.begin(),ca.end(),[](pair<long ,long > a,pair<long ,long >b){return a.second>b.second;});
    vector<long >fen(cnt+10,0);
    long  ans=0;
    for(int i=0;i<s;i++)
    { long  toadd=(sum(fen,cnt)-sum(fen,ca[i].second-1)+mod+1)%mod;
      
       ans=(ans+toadd)%mod;
      put(fen,ca[i].first,toadd);
    }
    long  k=ans+mod;
    string br=to_string(k);
    for(int i=1;i<br.size();i++)
        printf("%c",br[i]);
    printf("\n");
    scanf("%d",&s);}
    return 0;}
