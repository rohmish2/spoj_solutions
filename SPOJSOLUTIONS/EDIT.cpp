// Problem: EDIT
// Submission ID: 25858679
// Language: 4556

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  string a;
    //cin>>a;
  while(cin>>a)
  { 
    int uper[a.size()],lower[a.size()];
    if(isupper(a[0]))
     { uper[0]=0;
       lower[0]=1;
     }
    else
    {uper[0]=1;
     lower[0]=0;}

    for(int i=1;i<a.size();i++)
    { if(isupper(a[i]))
        { uper[i]=lower[i-1];
          lower[i]=uper[i-1]+1;
        }
      else
      {uper[i]=lower[i-1]+1;
          lower[i]=uper[i-1];

      }
    }
    cout<<min(uper[a.size()-1],lower[a.size()-1])<<endl;
  }

return 0;}
