// Problem: RENT
// Submission ID: 25658830
// Language: 18488

#include<bits/stdc++.h>
#define var tuple<int,int,int>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
    { int n;
      cin>>n;
      vector<tuple<int,int,int>>v(n);
      int maxt=0;
      for(int i=0;i<n;i++)
      {int t1,t2,t3;
       cin>>t1>>t2>>t3;
       maxt=max(maxt,t2+t1);
       v[i]=make_tuple(t1,t2+t1,t3);}
    sort(v.begin(),v.end(),[](var a,var b){return get<1>(a)< get<1>(b);});



    vector<int>a(maxt+1,0);

    for(int j=0;j<n;j++)
    {  int ma=a[get<0>(v[j])]+get<2>(v[j]);
        //cout<<ma<<"ex"<<j;
        for(int i=get<1>(v[j]);i<=maxt&&ma>a[i];i++)
           {  //cout<<"i"<<i<<endl;
               a[i]=ma;}
    }
    cout<<a[maxt]<<endl;
    }
return 0;}
