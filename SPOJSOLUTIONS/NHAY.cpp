// Problem: NHAY
// Submission ID: 25515746
// Language: 6168

#include<bits/stdc++.h>
using namespace std;
int main()
{ vector<int>preprocess(string a);
  long long l;
  while(scanf("%lld",&l)==1)
  {
      string a,b;
      cin>>a>>b;
      vector<int> p=preprocess(a);
      vector<long long int>ans;
      long long int i=0,j=0;
      while(i!=b.size())
      { if(a[j]==b[i])
          { j++;
            i++;
          }
        else if(i!=b.size())
        {

            if(j!=0)
               j=p[j-1];
            else
                i++;
        }

        j==a.size()?ans.push_back(i-j),j=p[j-1]:1;


      }
     for(auto i:ans)
        cout<<i<<endl;
   cout<<endl;
  }

return 0;}
vector<int>preprocess(string a)
{ long long ptr=0,ptr2=1;
  vector<int>t(a.size(),0);
  while(ptr2!=a.size())
  {
      if(a[ptr2]==a[ptr])
         { t[ptr2++]=ptr+1;
            ptr++;
         }
      else
        {  while(a[ptr2]!=a[ptr]&&ptr>0)
              {  ptr=t[ptr-1];
              }
           (a[ptr]==a[ptr2])?t[ptr2++]=ptr+1,ptr++:t[ptr2++]=0;
        }
 }
return t;
}
