// Problem: COMDIV
// Submission ID: 25510316
// Language: 4536

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
    {
    int a,b,gcd;
    scanf("%d %d",&a,&b);
    while(b!=0)
    { int  temp=a;
      a=b;
      b=temp%b;
    }
    gcd=a;
    int  cnt=0;
    for(int i=1;i*i<=gcd;i++)
    { if(gcd%i==0)
       {cnt++;
        if(gcd/i!=i)
            cnt++;}

    }
    printf("%d\n",cnt);

    //cout<<cnt<<endl;

    }
return 0;}
