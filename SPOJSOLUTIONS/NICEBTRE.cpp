// Problem: NICEBTRE
// Submission ID: 26008186
// Language: 4832

#include<bits/stdc++.h>
using namespace std;
int mx;
int dfs(string a,int index,int depth)
{ if(index==a.size())
   return index;
 //cout<<depth<<"   "<<index<<endl;
mx=max(mx,depth);
int k;
if(a[index]=='l')
        return index+1;
    else
        k=dfs(a,index+1,depth+1);//moving left
if(k<a.size())
k=dfs(a,k,depth+1);

return k;
}

int main()
{ int t;
  cin>>t;
  while(t--)
  { mx=0;
    string a;
    cin>>a;
    dfs(a,0,0);
    cout<<mx<<endl;
  }

return 0;}
