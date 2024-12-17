// Problem: IITKWPCO
// Submission ID: 26010227
// Language: 4568

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { map<int,int>avail;
    avail.clear();
    int s;
    scanf("%d",&s);
    vector<int>a(s);
    for(int i=0;i<s;i++)
    {scanf("%d",&a[i]);
     avail[a[i]]++;
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(auto i:a)
     { if(avail[i]>0&&avail[2*i]>0)
         {avail[i]-=1;
          avail[2*i]-=1;
          ans++;

         }
     }
  printf("%d\n",ans);
  }

return 0;}
