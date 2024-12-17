// Problem: STAMPS
// Submission ID: 25470115
// Language: 4832

#include <bits/stdc++.h>
#define scan(a) scanf("%lld",&a)
using namespace std;

int main()
{
    int te;
    cin>>te;
    for(int t=1;t<=te;t++)
    { long long tg,n;
     scan(tg);
     scan(n);
     vector<long long>a;
     for(int i=0;i<n;i++)
     {
         long long temp;
         scan(temp);
         a.push_back(temp);
     }
     sort(a.begin(),a.end());
     reverse(a.begin(),a.end());
    // for(auto i:a)
      //  cout<<i<<endl;
     long long sum=0;
     int index=0;

     long long cnt=0;
     while(sum<tg&&index<a.size())
     { //cout<<cnt<<endl;
            sum+=a[index];
            cnt++;
            index++;

    }
    cout<<"Scenario #"<<t<<":"<<endl;
    if(sum<tg)
        printf("impossible\n\n");
    else
        printf("%lld\n\n",cnt);
    }
    return 0;
}
