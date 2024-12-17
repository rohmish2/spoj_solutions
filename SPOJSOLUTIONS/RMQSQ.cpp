// Problem: RMQSQ
// Submission ID: 25764471
// Language: 10320

#include<bits/stdc++.h>
using namespace std;
int a[100100];
int sp[20][100100];
int main()
{ int s;
  scanf("%d",&s);
  for(int i=0;i<s;i++)
  {scanf("%d",&a[i]);}
   int q;
   scanf("%d",&q);
   //int lo=log2(s);
   for(int j=0;(1<<j)<=s;j++)
     for(int i=0;i+(1<<j)-1<s;i++)
       { //cout<<j<<endl;
           if(j==0)
           sp[j][i]=a[i];
           else
           sp[j][i]=min(sp[j-1][i],sp[j-1][i+(1<<(j-1))]);
       }
   while(q--)
   {
     int a1,a2;
     scanf("%d%d",&a1,&a2);
     int j=log2(a2-a1);
     printf("%d\n",min(sp[j][a1],sp[j][a2-(1<<(j))+1]));

   }
  return 0;}
