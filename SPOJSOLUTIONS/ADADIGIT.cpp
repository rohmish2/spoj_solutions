// Problem: ADADIGIT
// Submission ID: 26131022
// Language: 4736

#include <bits/stdc++.h>

using namespace std;




int main()
{   vector<int>pp={2, 3, 5, 7, 11, 13, 17, 19,23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,97};
    long int q1,q2;
    int k;
    char q11[10];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>q11[i];
    sort(q11,q11+k);

    string o;
    for(int i=0;i<k;i++)
        o+=q11[i];
   long int m1=0,m2=0;
    int q=0,a1,a2;
         //cout<<o<<endl;
        for(int i=0;i<k;i++)
           {q=q*10+(o[i]-'0');
           }
       a1=a2=q;
       int a=q;
      q1=1,q2=1;
    if(a==0)
   {   q1=0;
       q2=0;
       }
   if(a==1)
   {   q1=1;
       q2=1;
       }

    for(auto i:pp)
    {  if(a<=1)
      break;
        if(a%i==0)
         { int cnt=0,mul=1;
    while(a%i==0)
      { cnt++;
        a/=i;
        mul*=i;
      }
   q1*=cnt+1;
   q2*=((mul*i)-1)/(i-1);
    } }

       m1=q1;
       m2=q2;

    while(next_permutation(o.begin(),o.end()))
    {   int q=0,org;
         //cout<<o<<endl;
        for(int i=0;i<k;i++)
           {q=q*10+(o[i]-'0');
           }
     q1=1,q2=1;
    int a=q;
    if(a==0)
   {   q1=0;
       q2=0;
       }
   if(a==1)
   {   q1=1;
       q2=1;
       }

    for(auto i:pp)
    {  if(a==1)
      break;
        if(a%i==0)
         { int cnt=0,mul=1;
    while(a%i==0)
      { cnt++;
        a/=i;
        mul*=i;
      }
   q1*=cnt+1;
   q2*=((mul*i)-1)/(i-1);
    }}
    if(a>2)
{ 
    q1*=2;
  q2*=(1+a);
}

      if(q1>m1)
        {a1=q;
        m1=q1;}
      if(q2>m2)
      { a2=q;
        m2=q2;
      }

    }
    cout<<a1<<" "<<a2;
    return 0;
}
