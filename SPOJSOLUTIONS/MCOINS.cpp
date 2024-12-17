// Problem: MCOINS
// Submission ID: 25573305
// Language: 4804

#include<bits/stdc++.h>
using namespace std;
char ans[10000001];
int main()
{ int a,b;
  cin>>a>>b;
  for(int i=1;i<=1000000l;i++)
  { ans[i]='B';
    if(i==1||i==a||i==b)
     ans[i]='A';
    else if(i>b)
    { if(ans[i-b]!='A'||ans[i-a]!='A'||ans[i-1]!='A')
        ans[i]='A';}
    else if(i>a)
    {if(ans[i-a]!='A'||ans[i-1]!='A')
        ans[i]='A';
    }
    else
    {
        if(ans[i-1]!='A')
        ans[i]='A';
    }

  }
  long m;
  cin>>m;
  while(m--)
  { long long aq;
    cin>>aq;
    cout<<ans[aq];

  }
return 0;}
