// Problem: POLEVAL
// Submission ID: 25853344
// Language: 4620

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1;
    int n;
    cin>>n;
    while(n!=-1)
    { vector<int>a(n+1);
     for(int i=0;i<=n;i++)
        cin>>a[i];
     int k;
     cin>>k;
     cout<<"Case "<<c<<":\n";
     for(int i=0;i<k;i++)
     { int x;
       cin>>x;
       long ans=0;
       for(int j=0;j<n;j++)
          {
              ans+=pow(x,n-j)*a[j];
          }
          ans+=a[n];
       cout<<ans<<"\n";
     }
c++;
 cin>>n;
    }

return 0;}
