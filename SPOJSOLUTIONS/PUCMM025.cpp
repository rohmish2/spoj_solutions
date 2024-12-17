// Problem: PUCMM025
// Submission ID: 26061786
// Language: 4668

#include<bits/stdc++.h>
using namespace std;
char a[800];
bool divby2()//
{ if((a[strlen(a)-1]-'0')%2==0)
   return true;
   return false;}
bool divby3()
{   int sum=0;
    for(int i=0;i<strlen(a);i++)
       sum+=(a[i]-'0');
    return sum%3==0;

    }
bool divby4()
{ if(strlen(a)==1)
    return (a[strlen(a)-1]-'0')%4==0;
int   num=(10*(a[strlen(a)-2]-'0'))+(a[strlen(a)-1]-'0');
  return num%4==0;
}
bool divby5()
{ return (a[strlen(a)-1]-'0')%5==0;}
bool divby6()
{return (divby2()&&divby3());}
bool divby7()
{ int ar[6]={1,3,2,6,4,5};
  //int ptr=0;
  int num=0;
  for(int i=strlen(a)-1,ptr=0;i>=0;i--,ptr=(ptr+1)%6)
      num+=(a[i]-'0')*ar[ptr];
 if(num%7==0)
 return true;
 return false;
}
bool divby8()
{
    if(strlen(a)==1)
    return (a[strlen(a)-1]-'0')%8==0;
    if(strlen(a)==2)
    {int num=(10*(a[strlen(a)-2]-'0'))+(a[strlen(a)-1]-'0');
     return num%8==0;}
    int  num=(100*(a[strlen(a)-3]-'0'))+(10*(a[strlen(a)-2]-'0'))+(a[strlen(a)-1]-'0');
     return num%8==0;
}
bool divby9()
{int sum=0;
    for(int i=0;i<strlen(a);i++)
       sum+=(a[i]-'0');
    return sum%9==0;

}

int main()
{
    while(scanf("%s",a)!=EOF)
    {  vector<int>q(10,0);
      int cnt=0;
      for(int i=0;i<strlen(a);i++)
       { q[a[i]-'0']++;}

      for(char i='1';i<='9';i++)
       {  //q[a[i]-'0']=1;
               if(i=='1')
                cnt+=q[1];
               if(i=='2')
               { if(divby2())
                 cnt+=q[2];

               }
               if(i=='3')
               { if(divby3())
                 cnt+=q[3];

               }
              if(i=='4')
               { if(divby4())
                 cnt+=q[4];

               }
              if(i=='5')
               { if(divby5())
                   cnt+=q[5];
               }
              if(i=='6')
               {
                   if(divby6())
                    cnt+=q[6];
               }
              if(i=='7')
               { if(divby7())
                   cnt+=q[7];
               }
              if(i=='8')
               {
                   if(divby8())
                    cnt+=q[8];
               }
              if(i=='9')
               {
                   if(divby9())
                    cnt+=q[9];
               }

       }
    printf("%d\n",cnt);

    }
return 0;}
