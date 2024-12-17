// Problem: CNEASY
// Submission ID: 26088304
// Language: 4664

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
  { int s;
    scanf("%d",&s);
    string l;
    vector<double>d(s);
    for(int i=0;i<s;i++)
    {  cin>>l>>d[i];}
    sort(d.begin(),d.end());
    vector<double>diff;
    for(int i=1;i<s;i++)
      diff.push_back(d[i]-d[i-1]);
    double sam=360;
    diff.push_back(sam-(d[s-1]-d[0]));
    sort(diff.begin(),diff.end());
    //for(auto i:diff)
      //  cout<<i<<" ";
    int j=ceil((sam-diff[s-1])*12);
    printf("%d\n",j);

  }

return 0;}
