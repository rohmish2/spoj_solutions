// Problem: KURUK14
// Submission ID: 26003695
// Language: 4656

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { map<int,int>m;
    int s;
     cin>>s;
     for(int i=0;i<s;i++)
     {int temp;
      cin>>temp;
      m[temp]+=1;}
     int k=1;
     for(int i=0;i<s;i++)
       { if(!((m[i]==1&&m[s-1-i]==1)||(m[i]==2&&m[s-1-i]==0)||(m[i]==0&&m[s-1-i]==2)))
           {k=0;
           break;}
       }
   if(k==1)
    cout<<"YES\n";
   else
    cout<<"NO\n";

   }

return 0;}
