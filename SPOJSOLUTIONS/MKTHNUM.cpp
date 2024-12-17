// Problem: MKTHNUM
// Submission ID: 25586470
// Language: 281396

#include<bits/stdc++.h>
using namespace std;
struct node
{   long long low,high;
    vector<long long>mapl,mapr;
    node *left,*right;
    node()
    {left=NULL;
     right=NULL;}
    node(long long a,long long b)
    {low=a;
     high=b;
     left=NULL;
     right=NULL;
    }
};
node* build(long long l,long long h,vector<long long>arr)
{ vector<long long>left,right;
    if(l>h||arr.size()==0)
    return NULL;
  long long mid=(l+h)>>1;
  node* cur=new node(l,h);

  cur->mapl.push_back(0);
  cur->mapr.push_back(0);

  for(auto i:arr)
  { if(i<=mid)
       {cur->mapl.push_back(cur->mapl.back()+1);
        left.push_back(i);
       }
    else
       cur->mapl.push_back(cur->mapl.back());}
  for(auto i:arr)
  { if(i>mid)
       {cur->mapr.push_back(cur->mapr.back()+1);
        right.push_back(i);
       }
    else
       cur->mapr.push_back(cur->mapr.back());}

 if(l<h)
 {cur->left=build(l,mid,left);
 cur->right=build(mid+1,h,right);}
 return cur;
}
long long kth(long long l,long long h,node *cur,long long k)
{ if(cur->high==cur->low)
  return cur->low;
  long long mid=(l+h)>>1;
  if(cur->mapl[h]-cur->mapl[l-1]>=k)
        return kth(cur->mapl[l-1]+1,cur->mapl[h],cur->left,k);
  else
         return kth(l-cur->mapl[l-1],h-cur->mapl[h],cur->right,k- (cur->mapl[h])+(cur->mapl[l-1]));
}
int main()
{ long long n,q;
  cin>>n>>q;
  vector<long long>arr(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];
  long long l=*min_element(arr.begin(),arr.end());
  long long h=*max_element(arr.begin(),arr.end());
  node *s=build(l,h,arr);
  while(q--)
  {long long  int a1,b1,c1;
    cin>>a1>>b1>>c1;
    cout<<kth(a1,b1,s,c1)<<endl;

  }

return 0;}
