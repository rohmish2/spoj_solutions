// Problem: HORRIBLE
// Submission ID: 25519762
// Language: 17344

#include<bits/stdc++.h>
using namespace std;
void update_tree(long long val,long long l,long long r,long long sl,long long sr,vector<long long>&segment,vector<long long>&topush,long long node)
{ //cout<<sl<<" "<<sr<<endl;
  if(topush[node]!=0)
  {
   segment[node]+=(sr-sl+1)*topush[node];
   if(sr!=sl)
   {
       topush[2*node+1]+=topush[node];
       topush[2*node+2]+=topush[node];
   }
   topush[node]=0;
  }

  if(sl>r||sr<l||sl>sr)
        return;
 if(sl>=l&&sr<=r)
  {
   segment[node]+=(sr-sl+1)*val;
   if(sr!=sl)
   {
       topush[2*node+1]+=val;
       topush[2*node+2]+=val;
   }
   //topush[node]=0;
  return ;
  }
  long long mid=(sl+sr)>>1;
  update_tree(val,l,r,sl,mid,segment,topush,2*node+1);
  update_tree(val,l,r,mid+1,sr,segment,topush,2*node+2);
  segment[node]=segment[2*node+1]+segment[2*node+2];
}
long long rsq(long long l,long long r,long long sl,long long sr,vector<long long>&segment,long long node,vector<long long>&topush)
{ //cout<<sl<<" "<<sr<<endl;
 if(topush[node]!=0)
  {
   segment[node]+=(sr-sl+1)*topush[node];
   if(sr!=sl)
   {
       topush[2*node+1]+=topush[node];
       topush[2*node+2]+=topush[node];
   }
   topush[node]=0;
  }

  if(sl>r||sr<l||sl>sr)
        return 0;
 if(sl>=l&&sr<=r)
  return segment[node];

long long mid=(sl+sr)>>1;
return rsq(l,r,sl,mid,segment,2*node+1,topush)+rsq(l,r,mid+1,sr,segment,2*node+2,topush);
}
int main()
{   int t;
    cin>>t;
    while(t--)
    {vector<long long>segment(1000000,0),topush(1000000,0);
    long long n,q;
    cin>>n>>q;
    while(q--)
    { long long o,l,r,val;
      cin>>o;
      //cout<<"o is"<<o<<endl;
      if(o==0)
        {
          cin>>l>>r>>val;
          update_tree(val,l-1,r-1,0,n-1,segment,topush,0);
        }
      else
       {
          cin>>l>>r;
          cout<<rsq(l-1,r-1,0,n-1,segment,0,topush)<<endl;


       }

    }}
return 0;}
