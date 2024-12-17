// Problem: GSHOP
// Submission ID: 26160875
// Language: 4824

#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
   scanf("%d",&t);
   while(t--)
   { long long int  n,k;
     scanf("%lld%lld",&n,&k);
     vector<long long int>neg,pos;
     for(int i=0;i<n;i++)
     { long long int tmp;
       scanf("%lld",&tmp);
        if(tmp<0)
            neg.push_back(-1*tmp);
        else
            pos.push_back(tmp);
     }

    if(neg.size()==k)
    {  long long int s=0;
       for(auto i:neg)
         s+=i;
       for(auto i:pos)
         s+=i;
       printf("%lld\n",s);
    }
    else if(neg.size()>k)
    {   long long int s=0,cnt=1;
       for(auto i:neg)
          {if(cnt<=k)
            {s+=i;}
          else
            s-=i;
           cnt++;
            }
       for(auto i:pos)
         s+=i;
       printf("%lld\n",s);
    }
    else
    { long long int s=0;
       for(auto i:neg)
         {s+=i;}
        // cout<<"s"<<i<<endl;}
       for(auto i:pos)
         s+=i;
        if(neg.size()>0)
       sort(neg.begin(),neg.end());
       long long int tgt=0;
       if(neg.size()>0&&pos.size()>0)
        tgt=min(neg[0],pos[0]);
       else if(pos.size()>0)
        tgt=pos[0];
       else if(neg.size()>0)
        tgt=neg[0];

       k-=neg.size();
       if(k%2==0)
          printf("%lld\n",s);
       else
          printf("%lld\n",s-2*tgt);

    }

   }

return 0;}
