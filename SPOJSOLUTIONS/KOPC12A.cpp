// Problem: KOPC12A
// Submission ID: 26057734
// Language: 4744

#include<bits/stdc++.h>
using namespace std;
long long int costchecker(vector<int>&a,vector<int>&c,int h1)
{  long long int sum=0;
    for(int i=0;i<a.size();i++)
      sum+=abs(h1-a[i])*c[i];
   return sum;
}
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    scanf("%d",&s);
    vector<int>a(s),c(s);
    int l=0,h=10001;
    for(int i=0;i<s;i++)
        {scanf("%d",&a[i]);
        }
    for(int i=0;i<s;i++)
        scanf("%d",&c[i]);
        long long int ans;
    while(h-l>=0)
    { int mid=(l+h)>>1;
      long long int lower=costchecker(a,c,mid-1),higher=costchecker(a,c,mid+1) ,k=costchecker(a,c,mid);
      if(k<lower&&k<higher)
        { ans=k;
            break;}
      else if(k>higher)
       l=mid+1;
       else
       h=mid-1;
    }
    printf("%lld\n",ans);
  }

return 0;}
