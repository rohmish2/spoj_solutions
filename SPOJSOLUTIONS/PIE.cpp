// Problem: PIE
// Submission ID: 25889579
// Language: 4676

#include<bits/stdc++.h>
using namespace std;
int main()
{ double pi=2*acos(0);
  int t;
  cin>>t;
  while(t--)
  { int n,f;
    cin>>n>>f;
    vector<double>a(n);
    double maxi=0;
    f++;
    for(int i=0;i<n;i++)
    { double r;
      cin>>r;
      a[i]=(r*r*pi);
      maxi=max(maxi,a[i]);
    }
   double h=maxi,l=0.0,mid;
   while(h-l>1.e-5)
    { mid=(h+l)/2;
      //cout<<mid<<endl;
      int c=0;
      for(auto i:a)
      {c+=floor(i/mid);}
      if(c>=f)
       {  l=mid;}
       else
        h=mid;
    }
    printf("%.4f\n",mid);
  //cout<<mid<<endl;
  }
return 0;}
