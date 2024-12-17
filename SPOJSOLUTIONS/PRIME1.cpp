// Problem: PRIME1
// Submission ID: 25433092
// Language: 5868

#include <bits/stdc++.h>
using namespace std;
bool p[100001];
int main()
{ vector<long long >base_primes;
   //use segmented sieving method
   //find all prime number in range 0 to 100000
   p[0]=p[1]=1;
   for(int i=0;i*i<=100000;i++)
    {
     if(p[i]==0)
         for(int j=i*i;j<100000;j+=i)
            p[j]=1;
    }
    for(long int i=0;i<100000;i++)
        if(p[i]==0)
        {base_primes.push_back(i);
        //cout<<i<<endl;
        }
    int t;
    cin>>t;
    while(t--)
    {vector<int>tester(1000001,0);
     //memset(&tester,0,sizeof(tester));
    // tester[0]=tester[1]=1;
     long long h,l;
     cin>>l>>h;
     for(long int i=0;base_primes[i]*base_primes[i]<=h;i++)
     { long long  index=l/base_primes[i];

       if(index*base_primes[i]<l)
            index++;
       if(index==1)
            index++;
            //cout<<index<<base_primes[i]<<" "<<base_primes[i]*index<<" "<<h<<endl;
       for(long long int  j=base_primes[i]*index; j<=h; j+=base_primes[i])
           {//cout<<j-l;
               tester[j-l]=1;
            //cout<<"d";
           }

     }
    //cout<<"10";
    for(long long  i=0;i<=h-l;i++)
        if(tester[i]==0&&i+l>1)
         cout<<i+l<<endl;

    cout<<endl;
    }

    return 0;
}
