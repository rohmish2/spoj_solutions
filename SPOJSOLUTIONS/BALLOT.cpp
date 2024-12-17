// Problem: BALLOT
// Submission ID: 26157028
// Language: 15692

#include<bits/stdc++.h>
using namespace std;
struct city{
long long k;
long long maxi;
int n;
};
struct comp
{
   bool operator()(city &a,city&b)
   {return (a.maxi)<b.maxi;}
};
int main()
{ int c,b;
 scanf("%d%d",&c,&b);
  while(c!=-1)
  { int a=b-c;
    priority_queue<city,vector<city>,comp>p;
    for(int i=0;i<c;i++)
    { long long q;
      scanf("%lld",&q);
      city tmp;
      tmp.k=q;
      tmp.maxi=q;
      tmp.n=1;
      p.push(tmp);
    }
    while(a--)
    {
     city temp=p.top();
     p.pop();
     temp.n+=1;
     if(temp.k%temp.n==0)
        temp.maxi=temp.k/temp.n;
     else
        temp.maxi=(temp.k/temp.n)+1;

     p.push(temp);
    }
    printf("%lld\n",p.top().maxi);

    scanf("%d%d",&c,&b);}

return 0;}
