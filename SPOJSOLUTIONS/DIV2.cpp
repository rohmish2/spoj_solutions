// Problem: DIV2
// Submission ID: 26137121
// Language: 11048

#include<bits/stdc++.h>
using namespace std;
//int divis[1000001],ans[10000010];
int main()
{ vector<int>divis(1000001,2),ans(1000001,0);
 divis[1]=1;
  for(int i=2;2*i<=1000000;i++)
    for(int j=i*2;j<=1000000;j+=i)
        divis[j]++;
  for(int i=2;2*i<=1000000;i++)
    for(int j=i*2;j<=1000000;j+=i)
    {
      if(divis[j]%divis[i]!=0)
            ans[j]=1;
    }
 for(int i=2,cnt=0;i<1000001;i++)
 { if(ans[i]==0&&divis[i]>3)
 { cnt++;
       if(cnt%108==0)
        cout<<i<<"\n";//<<"  "<<cnt<<endl;
        
        
 }

 }
  return 0;}
