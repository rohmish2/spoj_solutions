// Problem: ODDDIV
// Submission ID: 26643890
// Language: 4932

#include<bits/stdc++.h>
using namespace std;
int seive[100001];
int main()
{ //freopen("in.txt","r",stdin);
   
 for(int i=2;i<=100000;i++)
	 seive[i]=i;
  for(int j=4;j<=100000;j+=2)
  	 seive[j]=2;
  
 for(int i=3;i*i<=100000;i++)
    {
       if(seive[i]==i)
       	for(int j=i*i;j<=100000;j+=i)
            if(seive[j]==j)
       		 seive[j]=i;
    }
    vector<vector<long long int>>a(10001);
 for(int i=2;i<=100000;i++)
   {

      int n=i;
      int cur=seive[n];
      n/=seive[n];
      int cnt=1;
      int qq=1;
      while(n!=1)
        {  if(seive[n]==cur)
        	cnt++;
           else 
            { qq*=((2*cnt)+1);
              cnt=1;
              cur=seive[n];
            } 
           n/=seive[n];}
      qq*=((2*cnt)+1);
     if(qq<=10000)
     	a[qq].push_back((long long )i*i);
    }
  
   int t;
    cin>>t;
    while(t--)
    { int k;
      long  long a1,b;
      cin>>k>>a1>>b;
      cout<<upper_bound(a[k].begin(),a[k].end(),b)-lower_bound(a[k].begin(),a[k].end(),a1)<<endl;

    }



 return 0;}
 