// Problem: NSTEPS
// Submission ID: 25461862
// Language: 4784

#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
    { long x,y;
      cin>>x>>y;
      if(x==y)
       { if(x==0||x==1)
          cout<<x;
         else
           { if(x%2==0)
             cout<<2*x;
             else
             cout<<2*x-1;
           }
       }
      else if(y==x-2)
        {
            if(y%2==0)
                cout<<(y*2+2);
            else
                cout<<y*2+1;
        }
      else
      cout<<"No Number";
      cout<<endl;
    }


}
