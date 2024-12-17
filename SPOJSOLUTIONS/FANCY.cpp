// Problem: FANCY
// Submission ID: 25975508
// Language: 4640

#include<bits/stdc++.h>
using namespace std;
int main()
{ unsigned long long p[31];
 p[0]=1;
  for(int i=1;i<31;i++)
    p[i]=p[i-1]*2;
int t;
scanf("%d",&t);
while(t--)
{ char s[100];
  scanf("%s",s);
  unsigned long long ans=1;
  for(int i=1;i<strlen(s);i++)
     {
         if(s[i]==s[i-1])
            ans*=2;
     }
 printf("%llu\n",ans);
}

return 0;}
