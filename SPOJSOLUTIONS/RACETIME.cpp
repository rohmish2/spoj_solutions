// Problem: RACETIME
// Submission ID: 26586450
// Language: 10924

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,q;
  cin>>n>>q;
  int bsize=sqrt(n);
  vector<int>aa(n);
  vector<vector<int>>a(n);
  unordered_map<int,int>mapp,st,ender;
  int cnt=0;
  for(int i=0;cnt<n;i++)
    { st[i]=cnt;
      for(int j=0;j<bsize&&cnt<n;j++)
      { int tmp;
        scanf("%d",&tmp);

        aa[i*bsize + j]=tmp;
         mapp[cnt]=i;
        cnt++;
        a[i].push_back(tmp);
       }
      ender[i]=cnt;
     sort(a[i].begin(),a[i].end());//sort each block
     //cout<<st[i]<<"  "<<ender[i]<<endl;
     }

   while(q--)
   {
    char c[2];
    scanf("%s",c);
    if(c[0]=='C')
    { int l,r,x;
       scanf("%d%d%d",&l,&r,&x);

      l--;
      r--;
      int ans=0;
        for(int i=mapp[l];i<=mapp[r];i++)
         {
          if(l<=st[i]&&r+1>=ender[i])
            {
                ans+=upper_bound(a[i].begin(),a[i].end(),x)-a[i].begin();}
          else
            {
                for(int j=max(st[i],l);j<min(ender[i],r+1);j++)
             {if(aa[j]<=x)
             ans++;}}


         }
    printf("%d\n",ans);
    //cout<<ans<<endl;
    }
    else
    { int in,x;
      scanf("%d%d",&in,&x);
      //cin>>in>>x;
      in--;
      int old=aa[in];
      aa[in]=x;
      int tgt=mapp[in];
      for(auto i=0;i<a[tgt].size();i++)
      { if(a[tgt][i]==old)
          {a[tgt][i]=x;
          break;}
      }


      sort(a[tgt].begin(),a[tgt].end());
    }


   }



  return 0;}
