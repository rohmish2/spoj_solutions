// Problem: MSUBSTR
// Submission ID: 26167020
// Language: 4548

#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  scanf("%d",&t);
  while(t--)
  {char a[3010];
  scanf("%s",a);

  //int odd=;
  int maxi=1;
  long long cnt=strlen(a);
  for(int i=1;i<strlen(a)-1;i++)
  {
       for(int j=1;i+j<strlen(a)&&i-j>=0;j++)
         {if(a[i+j]==a[i-j])
           {//odd++;
            if(2*j+1>maxi)
            { maxi=2*j+1;
              cnt=1;
            }
            else if(2*j+1==maxi)
            { cnt++;}
           }
         else
            break;}
  }
  for(int i=0;i<strlen(a)-1;i++)
  { if(a[i]==a[i+1])
       { //odd++;
         int l=i;
         int r=i+1;
         for(int j=0;r+j<strlen(a)&&l-j>=0;j++)
         {if(a[r+j]==a[l-j])
           {
               if(2*j+2>maxi)
            { maxi=2*j+2;
              cnt=1;
            }
            else if(2*j+2==maxi)
            { cnt++;}
           }
           else
            break;}


       }}

  printf("%d %lld\n",maxi,cnt);}
return 0;}
