// Problem: MAIN113
// Submission ID: 26162661
// Language: 4680

#include<bits/stdc++.h>
using namespace std;
long a[31],b[31];
int main()
{  a[2]=6;
   b[2]=3;
   for(int i=3;i<31;i++)
   { //long  pa=a[i-1],pb[i-1];
     a[i]=2*b[i-1]+a[i-1];
     b[i]=b[i-1]+a[i-1];
   }
   int t;
scanf("%d",&t);
while(t--)
{ int s;
  scanf("%d",&s);
  if(s==1)
    printf("3\n");
  else 
  printf("%ld\n",a[s]+b[s]);

}
return 0;}
