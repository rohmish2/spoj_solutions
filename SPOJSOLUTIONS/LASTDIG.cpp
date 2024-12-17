// Problem: LASTDIG
// Submission ID: 25462859
// Language: 4776

#include<bits/stdc++.h>
using namespace std;
int main()
{ vector<int>a[21];
  for(int i=0;i<=20;i++)
   {
     a[i].push_back(i%10);
     while((a[i][a[i].size()-1]*i)%10!=(i%10))
        a[i].push_back((a[i][a[i].size()-1]*i)%10);
     //cout<<i<<endl;
   }
   int t;
   cin>>t;
   while(t--)
   { long long ar,b;
    cin>>ar>>b;
    if(b==0)
        cout<<"1"<<endl;
    else
   ((b%(a[ar].size()))-1!=-1)?cout<<a[ar][(b%(a[ar].size()))-1]<<endl:cout<<a[ar][a[ar].size()-1]<<endl;

   }
return 0;}
