// Problem: MYQ1
// Submission ID: 25862902
// Language: 4604

#include<bits/stdc++.h>
using namespace std;
char o1[5]={'W','W','A','A','M'},o2[5]={'R','L','L','R','R'},e1[5]={'W','W','M','A','A'},e2[5]={'L','R','R','R','L'};
int main()
{ int t;
 scanf("%d",&t);
  while(t--)
  {  int n;
     scanf("%d",&n);
     n--;
     if(n==0)
        {printf("poor conductor\n");
        continue;}
     int k=(n/5)+1;
     if(n%5==0)
      k--;
  if(k%2==0)
  printf("%d %c %c\n",k,e1[n%5],e2[n%5]);
  else
  printf("%d %c %c\n",k,o1[n%5],o2[n%5]);
  }
return 0;}
