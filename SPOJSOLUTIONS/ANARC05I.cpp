// Problem: ANARC05I
// Submission ID: 26166548
// Language: 4636

#include<bits/stdc++.h>
using namespace std;
int main()
{char a[10000];
 scanf("%s",a);
 while(1)
 {if(strcmp(a,"Q")==0)
   return 0;
  int ans=0;
  set<pair<int,int>>x;
  int v=0,h=0;
  x.insert({0,0});
  for(int i=0;i<strlen(a);i++)
  {
      if(a[i]=='U')
     { v++;
         if(x.find({v,h})==x.end())
            x.insert({v,h});
         else
            ans++;
     }
    if(a[i]=='D')
     { v--;
         if(x.find({v,h})==x.end())
            x.insert({v,h});
         else
            ans++;
     }
     if(a[i]=='R')
     { h++;
         if(x.find({v,h})==x.end())
            x.insert({v,h});
         else
            ans++;
     }
     if(a[i]=='L')
     { h--;
         if(x.find({v,h})==x.end())
            x.insert({v,h});
         else
            ans++;
     }

//cout<<v<<" "<<h<<endl;
  }
   printf("%d\n",ans);

   scanf("%s",a);
 }
return 0;}
