// Problem: RLE
// Submission ID: 26158781
// Language: 4560

#include<bits/stdc++.h>
using namespace std;
int main()
{ char k[100010];
  while(scanf("%s",k)!=EOF)
  { auto p=k[0];
    int n=1;
   for(int i=1;i<strlen(k);i++)
     { //cout<<n<<" "<<p<<" "<<k[i]<<endl;
         if(p!=k[i])
         {// cout<<"muth";
             if(n>3)
            printf("%d!%c",n,p);
           else
           {while(n--)
               printf("%c",p);
           }
          n=1;
          p=k[i];
         }
         else
         {   p=k[i];
             n++;}
     }
   if(n>3)
            printf("%d!%c",n,p);
   else
   {while(n--)
        printf("%c",p);}
  printf("\n");
  //k.clear();
  }

return 0;}
