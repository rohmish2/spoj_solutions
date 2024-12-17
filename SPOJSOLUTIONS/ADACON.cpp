// Problem: ADACON
// Submission ID: 26135665
// Language: 16264

#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int cnt[1000001],primec[1000001];
int main()
{ for(int i=0;i<=1000000;i++)
  a[i]=i;

  for(int i=2;i*i<=1000000;i++)
  {if(a[i]==i)
     { for(int j=i*i;j<=1000000;j+=i)
          {if(a[j]==j)
             {a[j]=i;}}
             }
  }
  int n,zero=0;
  scanf("%d",&n);

  vector<int>b;
  for(int i=0;i<n;i++)
   {  int t;
      scanf("%d",&t);
      if(t!=0)
      {if(cnt[t]==0)
        {cnt[t]=1;
        b.push_back(t);}
     else
        cnt[t]++;}
      else
        {zero++;}//zero is not consider
   }
   n-=zero;//remove zeroes
   //cout<<1;
  vector<int>primelist;
  for(auto i:b)
    {   int num=i;
        int pr=a[i];

        while(num!=1)
          { if(primec[pr]==0)
             {primelist.push_back(pr);}
            while(num%pr==0)//remove that prime from num
              num/=pr;
            primec[pr]+=cnt[i];
            pr=a[num];
          }
   }
 //  cout<<2;
  sort(primelist.begin(),primelist.end(),[](int a,int b){
        if(primec[a]>primec[b])
          return true;
          return false;});

 
  long long int best=n-primec[2];
//cout<<n;
  for(auto i:primelist)
   {  if((n-primec[i])>=best)
      break;
      long long int comp=0;
      for(auto j:b)
        { if(j-(i-(j%i))>=0)
          comp+=(cnt[j]*min(j%i,i-(j%i)));
          else
          comp+=cnt[j]*(j%i);
          if(comp>=best)
            break;
        }
        best=min(best,comp);
   }
   if(n==0)
    cout<<2;
   else
   cout<<best;
  return 0;}
