// Problem: MAY99_2
// Submission ID: 25835059
// Language: 4820

#include<bits/stdc++.h>
using namespace std;
char ar[5]={'u','m','a','n','k'};
int main()
{ long long  num;
  int t;
  cin>>t;
  while(t--)
  {vector<int>a;
   cin>>num;

   while(num>0)
  { if(num%5==0)
    num-=5;
      a.push_back(num%5);
    num=num/5;
  }
  reverse(a.begin(),a.end());
  for(auto i:a)
    cout<<ar[i];
    cout<<endl;
    }
  return 0;}
