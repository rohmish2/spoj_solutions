// Problem: DIV
// Submission ID: 26002353
// Language: 7584

#include<bits/stdc++.h>
using namespace std;
int num[1000001];
bool mark[300];
int main()
{ for(int i=1;i*2<=1000000;i++)
     for(int j=i*2;j<=1000000;j+=i)
        num[j]++;
 int maxi=0;
 vector<int>prime={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};

 //cout<<sizeof(prime)/sizeof(int);
 for(int i=0;i<prime.size();i++)
    for(int j=i+1;prime[j]*prime[i]<=240;j++)
        {
            mark[ prime[j]*prime[i]]=true;}
vector<int>sol;
 for(int i=1;i<=1000000;i++)
    {  if(mark[num[i]+1])
         sol.push_back(i);
}
 for(int i=8;i<=sol.size();i+=9)
   cout<<sol[i]<<endl;
return 0;}
