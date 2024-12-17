// Problem: CATM
// Submission ID: 25660394
// Language: 4868

#include <bits/stdc++.h>

using namespace std;
//int a[101][101];
int main()
{int r,c;
 cin>>r>>c;

 int t;
 cin>>t;
  while(t--)
  { //memset(a,0,sizeof(a));
    int mx,my,c1x,c1y,c2x,c2y;

    cin>>mx>>my>>c1x>>c1y>>c2x>>c2y;

    int cc1=c,cc2=c;

    for(int i=1;i<=c;i++)
    { if((abs(i-c2y)+abs(1-c2x)<=abs(i-my)+abs(1-mx))||(abs(i-c1y)+abs(1-c1x)<=abs(i-my)+abs(1-mx)))
        { //cout<<i<<" ";
            cc1--;}
      if((abs(i-c2y)+abs(r-c2x)<=abs(i-my)+abs(r-mx))||(abs(i-c2y)+abs(r-c1x)<=abs(i-my)+abs(r-mx)))
       cc2--;
    }
    //cout<<cc1<<" "<<cc2<<endl;
   if(cc1+cc2>0)
   {cout<<"YES\n";
    continue;}
    int r1=r,r2=r;
   for(int i=1;i<=r;i++)
    { if((abs(i-c1x)+abs(1-c1y)<=abs(i-mx)+abs(1-my))||(abs(i-c2x)+abs(1-c2y)<=abs(i-mx)+abs(1-my)))
        r1--;
      if((abs(i-c1x)+abs(c-c1y)<=abs(i-mx)+abs(c-my))||(abs(i-c2x)+abs(c-c2y)<=abs(i-mx)+abs(c-my)))
        r2--;
    }
   if(r1+r2>0)
   {cout<<"YES\n";
    continue;}
    cout<<"NO\n";

  }
 return 0;
}
