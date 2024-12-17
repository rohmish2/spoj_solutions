// Problem: FRNDCIRC
// Submission ID: 26641185
// Language: 5536

#include<bits/stdc++.h>
using namespace std;
int root(int a,vector<int>&v)
{
 if(a==v[a])
 	return a;
 return v[a]=root(v[a],v);

}
int main()
{ 
	#ifndef ONLINE_JUDGE
      freopen("in.txt","r",stdin);
      freopen("op.txt","w",stdout);
	#endif 
   ios_base::sync_with_stdio(false);   
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
  unordered_map<string,int>pp;	
  int n;
  cin>>n;
  vector<int>a(2*n+1),p(2*n+1,0);
  for(int i=1;i<=2*n;i++){a[i]=i;}
  int cnt=1;
  for(int i=0;i<n;i++)
  { string t1,t2;
    cin>>t1>>t2;
    if(pp[t1]==0)
       pp[t1]=cnt++;
    if(pp[t2]==0)
       pp[t2]=cnt++;
    int x=pp[t1],y=pp[t2];
    if(p[x]==0)
    	{p[x]=1;
        a[x]=x;}
    if(p[y]==0)
    	{p[y]=1;
        a[y]=y;}
    
    int r1=root(x,a);
    int r2=root(y,a);
  
    if(r1!=r2)
     { a[r1]=r2;
       p[r2]+=p[r1];
       cout<<p[r2]<<endl;
     }
    else 
    cout<<p[r1]<<endl; 	
  
  }
  

  }
   
 return 0;}