// Problem: BEENUMS
// Submission ID: 25484779
// Language: 4812

#include<bits/stdc++.h>
using namespace std;
int main()
{   map< long long,bool> m;
    //vector<long long>a;
    long long t=1;
    m[t]=true;
   // a.push_back(1);
    long long mul=6;
    while(t<=1000000000)
    {    t+=mul;
        //a.push_back(t);
        m[t]=true;
        mul+=6;
        //cout<<a.back()<<endl;
    }
while(1)
{  scanf("%lld",&t);
 
    if(t==-1)
        return 0;
    m[t]==true?printf("Y\n"):printf("N\n");
}
return 0;}
