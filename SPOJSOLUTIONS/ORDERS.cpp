// Problem: ORDERS
// Submission ID: 26047096
// Language: 6176

#include<bits/stdc++.h>
using namespace std;
void  put(vector<int>&a,int n)
{ while(n<=a.size()-1)
    {  a[n]++;
       n+=(n&-n);
    }

}
void del(vector<int>&a,int n)
{while(n<=a.size()-1)
    {  a[n]--;
       n+=(n&-n);
    }

}
int val(vector<int>&a,int n)
{ int sum=0;
  while(n>0)
  {
    sum+=a[n];
    n-=(n&-n);
  }
  return sum;
}

int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
  scanf("%d",&s);
  vector<int>a(s+1),b(s);
   for(int i=1;i<=s;i++)
        {put(a,i);
        scanf("%d",&b[i-1]);}
    vector<int>ans(s);
    int k=s;
    for(int i=s-1;i>=0;i--)
    { int tgt=k-b[i];
      int h=s,l=1;
      int mid;
      int aaa=s+1;
      while(h-l>=0)
      { mid=(l+h)/2;
          //cout<<tgt <<" "<<l<<" "<<h<<" "<<mid<<"  "<<val(a,mid)<<endl;
          if(val(a,mid)<tgt)
            l=mid+1;
          else
          {aaa=min(mid,aaa);
            h=mid-1;}
      }
      k--;
      //cout<<"mid="<<aaa<<endl;
      del(a,aaa);
      ans[i]=aaa;    }
     for(auto i:ans)
        cout<<i<<" ";
     cout<<endl;

  }
  return 0;}
