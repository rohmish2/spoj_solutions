// Problem: COINS
// Submission ID: 25462327
// Language: 4532

#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mappi;
long long int fun(long long int a);
int main()
{
    mappi[0]=0;
    mappi[1]=1;
    mappi[2]=2;
    mappi[3]=3;
    
    long long a;
    while(1)
    { string as; 
      cin>>as;
       if(as.size()==0)
        return 0;
        a=stoi(as);
        cout<<fun(a)<<endl;
    }
return 0;}
long long int fun(long long int a)
{
    if(mappi.count(a))
        return mappi[a];
    else
        {mappi[a]=max(fun(a/2)+fun(a/3)+fun(a/4),a);
        return mappi[a];}
}
