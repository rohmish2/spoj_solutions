// Problem: PALIN
// Submission ID: 25442136
// Language: 5088

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   { string a;
     cin>>a;
     long  c=0;
     if(a.size()==1&&a[0]<'9')
     { int k=a[0]-'0';
         k++;

         cout<<k<<endl;
     continue;}
     for(auto i:a)
      if(i=='9')
        c++;
     if(c==a.size())
     { string b(a.size()+1,'0');
       b[0]='1';
       a=b;
     }
     string bef=a;
   int key=1;
   if(a.size()%2==0)
    key=0;

   for(int i=0,j=a.size()-1;i<a.size()/2&&j>=a.size()/2;i++,j--)
   {
       if(a[i]!=a[j])
       {a[j]=a[i];}
   }
   if(a<=bef)
   {
   if(key==0)
   {
       for(int i=(a.size()/2)-1,j=a.size()/2;j<a.size()&&i>=0;i--,j++)
         { if(a[i]!='9')
             {a[i]=a[j]=char((int)a[i]+1);
             break;}
             else
                a[i]=a[j]='0';

         }

   }
   else
    {   if(a[a.size()/2]!='9')
        {a[a.size()/2]=char((int)a[a.size()/2]+1);}
         else
         { a[a.size()/2]='0';
             for(int i=(a.size()/2)-1,j=a.size()/2+1;j<a.size()&&i>=0;i--,j++)
         { if(a[i]!='9')
             {a[i]=a[j]=char((int)a[i]+1);
             break;}
           else
              a[i]=a[j]='0';
         }
         }
   }}

   cout<<a<<endl;

   }
return 0;}
