// Problem: RANGESUM
// Submission ID: 26595519
// Language: 5572

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
  cin>>n;
  vector<long long int>a(n),pre(n,0);
  for(int i=0;i<n;i++)
    cin>>a[i];
  reverse(a.begin(),a.end());
  pre[0]=a[0];
  for(int i=1;i<n;i++)
    pre[i]=pre[i-1]+a[i];

  int q;
  cin>>q;
  while(q--)
  {  int k;
      cin>>k;
      if(k==1)
      { int l,r;
        cin>>l>>r;
        int nl=n-r;
        int nr=n-l;
        if(nl==0)
            cout<<pre[nr]<<"\n";
        else
            cout<<pre[nr]-pre[nl-1]<<"\n";
      }
       else
      { int ss;
        cin>>ss;
          pre.push_back(ss+pre.back());
          n++;
      }
  }


 return 0;
}
