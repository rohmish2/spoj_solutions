// Problem: ARMY
// Submission ID: 25472443
// Language: 4800

#include <bits/stdc++.h>

using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--)
    { int a,b;
      cin>>a>>b;
      vector<int>aa,bb;
      for(int i=0;i<a;i++)
      { int temp;
       cin>>temp;
       aa.push_back(temp);
      }
      for(int i=0;i<b;i++)
      { int temp;
       cin>>temp;
       bb.push_back(temp);
      }
      sort(aa.begin(),aa.end());
      sort(bb.begin(),bb.end());
      if(aa.back()>=bb.back())
            cout<<"Godzilla"<<endl;
      else
            cout<<"MechaGodzilla"<<endl;
    }
    return 0;
}
