// Problem: MCUR98
// Submission ID: 26201211
// Language: 4740

#include<bits/stdc++.h>
using namespace std;
bool a[1000001];
inline long dn(long l)
{ long ans=l;
  while(l>0)
  {ans+=l%10;
      l/=10;
  }
  return ans;
}
int main()
{
    for(long int i=1;i<1000000;i++)
    {   if(!a[i])
        {long k=dn(i);
        while(k<1000000&&a[k]==false)
          {  
             a[k]=true;
            k=dn(k);
          }}
    
    }

    for(long int i=1;i<1000000;i++)
     if(!a[i])
          printf("%ld\n",i);
return 0;}
