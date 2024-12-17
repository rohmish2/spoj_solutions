// Problem: ABA12D
// Submission ID: 25898315
// Language: 7200

#include <bits/stdc++.h>

using namespace std;
int a[1000001];
bool p[34921812];
int maxi=0;
int main()
{   for(int i=3;i*i<=3492181;i+=2)
       {if(p[i]==false)
        for(int j=i*i;j<=3492181;j+=i)
         p[j]=true;}

 int ans[1000];
int  ptr=0;
int maxi=0;
 ans[ptr++]=2;
 //ans[ptr++]=4;


    for(int i=2;i<=1000;i++)
       {   if(i%2==0)
           { int t=log2(i);
             if(pow(2,t)!=i)
              continue;
           }
           int t=i*i;
           for(int j=1;j*j<=t;j++)
           {
            if(t%j==0)
            { a[t]+=j;
              if(j!=t/j)
              a[t]+=t/j;
            }
           }
          //maxi=max(maxi,a[t]);

        if((a[t]%6==1||a[t]%6==5)&&p[a[t]]==false)
        { //cout<<t<<endl;
            ans[ptr++]=t;}
       }
   int t;
scanf("%d",&t);
while(t--)
{ int l,h;
  scanf("%d%d",&l,&h);
  printf("%d\n",upper_bound(ans,ans+ptr,h)-lower_bound(ans,ans+ptr,l));


}
    return 0;
}
