// Problem: ILKQUERY
// Submission ID: 25569224
// Language: 39800

#include<bits/stdc++.h>
using namespace std;
struct wave
{ long long l,h;
  wave *left,*right;
  vector<long long>mapl,mapr;
  wave()
  {
      left=NULL;
      right=NULL;
  }
 wave(long long a,long long b)
 { l=a;h=b;
   left=NULL;
    right=NULL;
 }
};
wave* init(long long high,long long low,vector<long long>arr)
{ if(low>high||arr.size()==0)
  return NULL;
  vector<long long>le,rig;
  wave *cur=new wave(low,high);
  long long mid=(low+high)/2;
  if(low+1==high)
  mid=low;
  auto f=[mid](long long i){return mid>=i? 1: 0;};
  for(auto i=arr.begin();i<arr.end();i++)
  { if(i==arr.begin())
      cur->mapl.push_back(f(*i));
    else
      cur->mapl.push_back(cur->mapl.back()+f(*i));


    if(f(*i)==1)
            le.push_back(*i);
    else
            rig.push_back(*i);
  }
  for(long long int i=0;i<cur->mapl.size();i++)
    cur->mapr.push_back(i+1-cur->mapl[i]);
  /*for(int i=0;i<cur->mapl.size();i++)
  { cout<<" "<<cur->mapl[i];}
  cout<<"r";
  for(int i=0;i<cur->mapl.size();i++)
  { cout<<" "<<cur->mapr[i];}
  cout<<endl;*/
  if(low<high)
  {cur->left= init(mid,low,le);
  cur->right= init(high,mid+1,rig);}
  return cur;
}
long long kth(long long r,long long k,wave* s)
{ //cout<<r<<" "<<k<<" "<<s->mapl[r]<<endl;

    if(s->l==s->h)
   return s->l;
  if(s->mapl[r]>=k)
        { //cout<<"k";
            return kth(s->mapl[r]-1,k,s->left);}
  else
       {//cout<<"kk";
        return kth(s->mapr[r]-1,(k-(s->mapl[r])),s->right);
       }
}

int main()
{ long long s,q;
  //cin>>s>>q;
  scanf("%lld%lld",&s,&q);
  map<long long,vector<long long>>mp;
  vector<long long>arr(s);
  for(int i=0;i<s;i++)
    {  scanf("%lld",&arr[i]);
        //cin>>(arr[i]);
    mp[arr[i]].push_back(i);
    }
    long long low=*(min_element(arr.begin(),arr.end()));
    long long high=*(max_element(arr.begin(),arr.end()));
  wave *st=init(high,low,arr);
  while(q--)
  { long long k,r,c,l;
    scanf("%lld%lld%lld",&k,&r,&l);
    //cin>>k>>r>>l;
    c=kth(r,k,st);
    //cout<<"c="<<c;
    if(l>0&&mp[c].size()>=l)
        printf("%lld\n",mp[c][l-1]);
    else
        printf("-1\n");
        //cout<<-1;
    //cout<<endl;
   }
    return 0;
}
