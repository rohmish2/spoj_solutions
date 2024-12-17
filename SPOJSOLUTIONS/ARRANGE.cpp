// Problem: ARRANGE
// Submission ID: 26044988
// Language: 4520

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    scanf("%d",&s);
    vector<int>a(s);
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);
    if(s==2)
    { sort(a.begin(),a.end());
      if(a[0]==2&&a[1]==3)
        printf("%d %d\n",a[0],a[1]);
      else if(a[0]==1)
        printf("%d %d\n",a[0],a[1]);
      else
        printf("%d %d\n",a[1],a[0]);
    }
    else
    {sort(a.begin(),a.end());
    int cnt=0;
    for(int i=0;i<a.size();i++)
        {if(a[i]>1)
          break;
        else
          {cnt++;
          printf("1 ");}
          }
          if(a[a.size()-1]==3&&a[a.size()-2]==2)
          {printf("2 3\n");
            continue;}
    for(int i=a.size()-1;i>=0;i--)
    { if(a[i]==1)
       break;
       printf("%d ",a[i]);

    }}
   printf("\n");

   }

return 0;}
