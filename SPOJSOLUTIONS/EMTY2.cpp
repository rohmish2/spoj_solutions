// Problem: EMTY2
// Submission ID: 26064002
// Language: 4784

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  scanf("%d",&t);
  int c=1;
  while(t--)
  {
    string a;
    cin>>a;
    int z=0;
    cout<<"Case "<<c++<<": ";
    for(int i=a.size()-1;i>=0;i--)
     { if(a[i]=='1')
        { if(z>=2)
           z-=2;
          else
           {z=-1;
           break;}
        }
        else
           z++;
     }
  if(z==0)
    cout<<"yes\n";
  else
    cout<<"no\n";
  }

return 0;}
