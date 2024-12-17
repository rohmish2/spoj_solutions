// Problem: NUMOFPAL
// Submission ID: 26166954
// Language: 4816

#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[2000];
  scanf("%s",a);
  //odd pal cnt
  int odd=strlen(a);
  for(int i=1;i<strlen(a)-1;i++)
  { //int m=i;
       for(int j=1;i+j<strlen(a)&&i-j>=0;j++)
         {if(a[i+j]==a[i-j])
           odd++;
         else
            break;}
  }
  for(int i=0;i<strlen(a)-1;i++)
  { if(a[i]==a[i+1])
       { odd++;
         int l=i;
         int r=i+1;
         for(int j=1;r+j<strlen(a)&&l-j>=0;j++)
         {if(a[r+j]==a[l-j])
           odd++;
         else
            break;}


       }
  }
  printf("%d",odd);
return 0;}
