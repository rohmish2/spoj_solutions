// Problem: SHP
// Submission ID: 26169752
// Language: 4780

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,k;
  scanf("%d%d",&n,&k);
  vector<int>a(n),b(n);
 map<int,int>pos;
  for(int i=0;i<n;i++)
  { scanf("%d",&a[i]);
  b[i]=a[i];
    pos[a[i]]=i;}

    sort(b.begin(),b.end(),[](int a1,int b1){return a1>b1;});
 
  int key=1;
  for(;k>0&&key==1;)
  {
      int in;
      for( in=0;in<n;in++)
      { if(a[in]!=b[in])
          break;
      }

      if(in==n)
        key=0;
      else
      { int posi=pos[b[in]];

        swap(a[in],a[posi]);
        pos[a[in]]=in;
        pos[a[posi]]=posi;
        k--;
      }
    }
   if(key==1)
      for(auto i:a)
       printf("%d ",i);
   else
   {  if(k%2==1)
       swap(a[n-1],a[n-2]);

       for(auto i:a)
       printf("%d ",i);
   }

   return 0;}
