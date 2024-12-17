// Problem: MAXSUMSQ
// Submission ID: 26084529
// Language: 15368

#include<bits/stdc++.h>
using namespace std;
void put(int in,vector<int>&fen,int cnt)
{   while(in<=cnt)
     { fen[in]++;
       in+=(in&-in);}
}
void del(int in,vector<int>&fen,int cnt)
{   while(in<=cnt)
     { fen[in]--;
       in+=(in&-in);}
}
int sumi(int in,vector<int>&fen)
{ int to=0;
  while(in>0)
  {   to+=fen[in];
      in-=(in&-in);
  }
return to;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    scanf("%d",&s);
    vector<int>a(s),suffixsum(s+1,0);
    set<int>ss;
    unordered_map<int,int>mp,rev;
    ss.insert(0);
    int cnt=1;
    for(int i=0;i<s;i++)
    { scanf("%d",&a[i]);
      suffixsum[i+1]=suffixsum[i]+a[i];
       ss.insert(suffixsum[i+1]);
    }
    //data compression
    for(auto i:ss)
    { mp[i]=cnt++;
      rev[cnt-1]=i;
    }
    int siz=ss.size()+2;
    vector<int>fen(siz+10,0);
    for(auto i:suffixsum)
        put(mp[i],fen,siz);

    long int mini=-999999999,ct=0;
    for(int i=suffixsum.size()-1;i>0;i--)
       {
        int kk;
        del(mp[suffixsum[i]],fen,siz);
        int h=siz+1,l=1;
        int ccnt=0;
        while(h>=l)
        { int k=(l+h)/2;
           int sss=sumi(k,fen);
            if(sss==0)
                l=k+1;
            else
            { kk=k;
              ccnt=sss;
              h=k-1;
            }

        }
       // cout<<"rev kk"<<rev[kk]<<endl;
        int sum=suffixsum[i]-rev[kk];

        if(mini==sum)
            ct+=ccnt;
        else if(mini<sum)
        {
          mini=sum;
          //cout<<"sum="<<ccnt<<endl;
          ct=ccnt;

        }


       }
  printf("%ld %ld\n",mini,ct);
  //cout<<mini<<" "<<ct<<endl;
   }
  return 0;}
