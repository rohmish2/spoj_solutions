// Problem: KQUERY
// Submission ID: 25649763
// Language: 11916

#include<bits/stdc++.h>
using namespace std;
void build(int  l,int  r,int  node,vector<vector<int>>&s,vector<int >arr)
{ if(l==r)
    {
      s[node].push_back(arr[l]);
      return;
    }
 int  m=(l+r)>>1;
 build(l,m,((node<<1))+1,s,arr);
 build(m+1,r,((node<<1))+2,s,arr);
s[node].resize(s[(node<<1)+1].size()+s[(node<<1)+2].size());
merge(s[(node<<1)+1].begin(),s[(node<<1)+1].end(),s[(node<<1)+2].begin(),s[(node<<1)+2].end(),s[node].begin());

}
int  que(int l,int r,int sl,int sr,int  node,vector<vector<int >>&s,int  k)
{ if(sl>r||sr<l)
   return 0;
 // cout<<sl<<" "<<sr<<" "<<l<<" "<<r<<endl;
  if(sl>=l&&sr<=r)
  {
      return s[node].end()-upper_bound(s[node].begin(),s[node].end(),k);
  }
  int m=(sl+sr)>>1;
 return  que(l,r,sl,m,(node<<1)+1,s,k)+que(l,r,m+1,sr,(node<<1)+2,s,k);

}
int main()
{ int n;
  scanf("%d",&n);
  vector<vector<int>>segment(5*n);
  vector<int >arr(n);
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);


  build(0,n-1,0,segment,arr);
  int a;
  scanf("%d",&a);
  while(a--)
  { int q1,q2;
    int q3;
    scanf("%d%d%d",&q1,&q2,&q3);
    printf("%d\n",que(q1-1,q2-1,0,n-1,0,segment,q3));
  }
  return 0;}
