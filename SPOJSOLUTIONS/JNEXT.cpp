// Problem: JNEXT
// Submission ID: 25572168
// Language: 7216

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { long s;
    cin>>s;
    vector<int>arr(s);
    for(int i=0;i<s;i++)
        cin>>arr[i];
    if(is_sorted(arr.rbegin(),arr.rend()))
     {cout<<"-1\n";
     continue;}
    else
    { vector<int>::iterator temp;
     for(auto i=arr.end()-1;i>arr.begin();i--)
       {   //cout<<*i<<"   "<<*(i-1)<<endl;
           if(*(i)>*(i-1))
           {temp=i;
           break;}
       }
     //cout<<"qq"<<*temp<<"aa";
    sort(temp,arr.end());
    for(auto t=temp;t<arr.end();t++)
      { if(*t>*(temp-1))
        {swap(*t,*(temp-1));
        break;}
      }
    for(auto i:arr)
     cout<<i;
     cout<<"\n";
    }
  }
return 0;}
