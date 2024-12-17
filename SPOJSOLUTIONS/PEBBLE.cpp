// Problem: PEBBLE
// Submission ID: 25833358
// Language: 4752

#include<bits/stdc++.h>
using namespace std;
int main()
{ //char s[100];
  //scanf("%s",s);
  string a;
  int t=1;
  while(cin>>a)
  { int ans=0;
    ans=(a.back()=='1')?1:0;
    char q=a.back();
    for(int i=a.size()-2;i>=0;i--)
      { if(a[i]=='1')
         {  if(q=='0')
                ans+=2;
             q='1';
         }
         else
            q='0';
    }
  cout<<"Game #"<<t<<": "<<ans<<endl;
 t++;
  }

return 0;}
