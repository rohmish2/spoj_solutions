// Problem: CVJETICI
// Submission ID: 26173014
// Language: 4840

#include<bits/stdc++.h>
using namespace std;
int geti(int index,vector<int>&fen)
{ int sum=0;
  while(index>0)
  { sum+=fen[index];
    index-=((-index)&index);
  }
return sum;
}
void sub(int index,int a,int flag,vector<int>&fen)
{    int val=a*flag;
 while(index<fen.size())
 { fen[index]+=val;
   index+=((-index)&index);
 }
}

int main()
{ int n;
  scanf("%d",&n);
  vector<pair<int,int>>v(n);
  int maxi=0;
  for(int i=0;i<n;i++)
  { scanf("%d%d",&v[i].first,&v[i].second);
    maxi=max(maxi,v[i].second);
  }
  vector<int>fenwick(maxi+10,0);
  for(int i=0;i<n;i++)
  { int k1,k2;
    k1=geti(v[i].first,fenwick);
    k2=geti(v[i].second,fenwick);
    printf("%d\n",k1+k2);
    sub(v[i].first+1,1,1,fenwick);
    if(k1>0)
    {sub(v[i].first,k1,-1,fenwick);
     sub(v[i].first+1,k1,1,fenwick);}
    if(k2>0)
    {sub(v[i].second,k2,-1,fenwick);
     sub(v[i].second+1,k2,1,fenwick);
    }
    sub(v[i].second,1,-1,fenwick);

  }

return 0;}
