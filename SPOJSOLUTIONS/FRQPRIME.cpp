// Problem: FRQPRIME
// Submission ID: 26137711
// Language: 4520

#include<bits/stdc++.h>
using namespace std;
bool seive[100001];
int main()
{ vector<int>prefix(100001,0);
    for(int i=2;i*i<100000;i++)
   {//cout<<i<<endl;
       if(seive[i]==false)
         {for(int j=i*i;j<=100000;j+=i)
             seive[j]=true;}}

   for(int i=2;i<=100000;i++)
   { prefix[i]=prefix[i-1];
     if(seive[i]==false)
         prefix[i]++;
   }

 int t;
 scanf("%d",&t);
 while(t--)
   { int n,k;
     scanf("%d%d",&n,&k);
   if(k==0)
  {long long a=(n-1);
    a*=n;
 printf("%lld\n",a/2);
continue;}  
long ans=0;
     for(int i=2;i<=n;i++)
      {
          int ending=lower_bound(prefix.begin(),prefix.begin()+n+1,prefix[i-1]+k)-prefix.begin();
          if(ending==n+2)
             break;
         // cout<<i<<"  "<<ending<<endl;
          ans+=n-ending+1;

      }

   printf("%ld\n",ans);
   }
return 0;}
