// Problem: PROSCORE
// Submission ID: 26158090
// Language: 4668

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    scanf("%d",&t);
    int c=1;
    while(t--)
    { int n,p;
      int ans=7;
      bool ser=false,se=false;
      scanf("%d%d",&n,&p);
      vector<int>a(p,0);
      for(int i=0;i<n;i++)
      { int s=0;
          for(int j=0;j<p;j++)
            {int temp;
            scanf("%d",&temp);

            a[j]+=temp;
            s+=temp;
            }
        if(s==0&&se==false)
            {se=true;
            ans-=2;}
        if(s==p&&ser==false)
            {ser=true;
            ans-=1;}
      }
    for(auto i:a)
        if(i==0)
        {ans-=4;
        break;}
    printf( "Case %d: %d\n",c++,ans);
    }

return 0;}
