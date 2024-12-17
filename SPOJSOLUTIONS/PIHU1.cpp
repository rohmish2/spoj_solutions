// Problem: PIHU1
// Submission ID: 26083046
// Language: 4628

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    scanf("%d",&s);
    vector<long>a(s);
    for(int i=0;i<s;i++)
        scanf("%ld",&a[i]);
        long p;
        scanf("%ld",&p);
    sort(a.begin(),a.end());
    int k=0;
    for(int i=0;i<s&&k==0;i++)
        for(int j=i+1;j<s&&k==0;j++)
          { auto ki=equal_range(a.begin()+j+1,a.end(),p-a[i]-a[j]);
             if(ki.second-ki.first!=0)
                {k=1;
                break;}

          }
    if(k==1)
        printf("YES\n");
    else
        printf("NO\n");

  }
  return 0;}
