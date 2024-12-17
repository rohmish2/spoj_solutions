// Problem: CANDY
// Submission ID: 25462061
// Language: 4588

#include<bits/stdc++.h>
using namespace std;
int main()
{ while(1)
{ long a;
 cin>>a;
 if(a==-1)
    return 0;
 vector<int>q;
 long sum=0;
 for(int i=0;i<a;i++)
 {int t;
  cin>>t;
  sum+=t;
  q.push_back(t);
 }
 if(sum%a!=0)
 {cout<<"-1"<<endl;
  continue;}
 long target=sum/a,m=0,mul=0;
 for(auto i:q)
    if(i<target)
     {m+=i;
      mul++;}
  cout<<target*mul-m;

cout<<endl;
}
return 0;
}
