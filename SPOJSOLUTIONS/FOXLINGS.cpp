// Problem: FOXLINGS
// Submission ID: 26640293
// Language: 11276

#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>visit;
int n,m;
int parent(int x)
{
 if(x==visit[x])
 	return x;
 return visit[x]=parent(visit[x]);
    
}



int main()
{ 
	#ifndef ONLINE_JUDGE
	 freopen("ip.txt","r",stdin);
	 freopen("op.txt","w",stdout);
	#endif 
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 cin>>n>>m;
 //vector<int>a(n+1);
 //for(int i=0;i<=n;i++){visit[i]=i;}
 while(m--)
  { int x,y;
  	cin>>x>>y; 
  	 if(!visit[x])
            visit[x]=x;
        if(!visit[y])
            visit[y]=y;
  	//unio(x,y);
  	int l=parent(x);//find parent of i
  int k=parent(y);//find parent of j
  if(l!=k)
  	n--;
  visit[k]=l;
   }
   //set<int>q;
  
 
  cout<<n;  
 return 0;}