// Problem: SCPC11B
// Submission ID: 25645500
// Language: 4668

#include<bits/stdc++.h>
using namespace std;
int main()
{
  while(1)
  { long n;
    cin>>n;
    if(n==0)
        return 0;
    int k=1;
    int prev=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    {  int temp=arr[i];

       if(temp-prev>200)
        {k=0;}
      prev=temp;
    }
    
    if(2*(1422-prev)>200)
        k=0;
    if(k==1)
        cout<<"POSSIBLE\n";
    else
        cout<<"IMPOSSIBLE\n";
  }
  return 0;}
