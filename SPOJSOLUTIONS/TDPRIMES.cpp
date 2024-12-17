// Problem: TDPRIMES
// Submission ID: 25643617
// Language: 101380

#include <bits/stdc++.h>

using namespace std;
bool a[100000000];
int main()
{
    string s;
    for(long i=2;i*i<100000000;i++)
     {  if(a[i]==false)
         {
            for(long j=i*i;j<100000000;j+=i)
                 a[j]=true;
         }
     }
    a[0]=a[1]=true;
    long j=1;
    for(long long int i=2;i<100000000;i++)
    {
        if(a[i]==false)
       { if(j%100==1)
           {printf("%lld\n",i);}
           j++;

       }
    }
    //cout<<s;
    return 0;
}
