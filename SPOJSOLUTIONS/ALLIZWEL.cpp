// Problem: ALLIZWEL
// Submission ID: 25643413
// Language: 4720

#include<bits/stdc++.h>
using namespace std;
string a;

void dfs(vector<vector<int>>v,vector<vector<char>>m,int r,int c,int index,int &key)
{if(index==10||key==1)
   {   key=1;
       return;}
//cout<<m[r][c]<<" "<<r<<" "<<c<<endl;
 if(r+1<m.size()&&v[r+1][c]==0&&m[r+1][c]==a[index])
    { v[r+1][c]=1;
      dfs(v,m,r+1,c,index+1,key);
      v[r+1][c]=0;
    }
 if(r+1<m.size()&&c+1<m[0].size()&&v[r+1][c+1]==0&&m[r+1][c+1]==a[index])
    { v[r+1][c+1]=1;
      dfs(v,m,r+1,c+1,index+1,key);
      v[r+1][c+1]=0;
    }
if(r+1<m.size()&&c-1>=0&&v[r+1][c-1]==0&&m[r+1][c-1]==a[index])
    { v[r+1][c-1]=1;
      dfs(v,m,r+1,c-1,index+1,key);
      v[r+1][c-1]=0;
    }

 if(c+1<m[0].size()&&v[r][c+1]==0&&m[r][c+1]==a[index])
    { v[r][c+1]=1;
      dfs(v,m,r,c+1,index+1,key);
      v[r][c+1]=0;
    }
if(c-1>=0&&v[r][c-1]==0&&m[r][c-1]==a[index])
    { v[r][c-1]=1;
    dfs(v,m,r,c-1,index+1,key);
    v[r][c-1]=0;
    }

if(r-1>=0&&v[r-1][c]==0&&m[r-1][c]==a[index])
    { v[r-1][c]=1;
      dfs(v,m,r-1,c,index+1,key);
      v[r-1][c]=0;
    }
 if(r-1>=0&&c+1<m[0].size()&&v[r-1][c+1]==0&&m[r-1][c+1]==a[index])
    { v[r-1][c+1]=1;
      dfs(v,m,r-1,c+1,index+1,key);
      v[r-1][c+1]=0;
    }
if(r-1>=0&&c-1>=0&&v[r-1][c-1]==0&&m[r-1][c-1]==a[index])
    { v[r-1][c-1]=1;
      dfs(v,m,r-1,c-1,index+1,key);
      v[r-1][c-1]=0;
    }

}
int main()
{ a="ALLIZZWELL";
  int t;
  cin>>t;
  while(t--)
  { int r,c;
    cin>>r>>c;
    vector<vector<char>>matrix(r,vector<char>(c));
    set<pair<int,int>>s;
    int key=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
         { cin>>matrix[i][j];
           if(matrix[i][j]=='A')
             s.insert(make_pair(i,j));
         }
   for(auto j:s)
   { vector<vector<int>>visited(r,vector<int>(c,0));
     dfs(visited,matrix,j.first,j.second,1,key);
     if(key==1)
        break;
   }
  if(key==1)
    cout<<"YES\n";
  else
    cout<<"NO\n";
s.clear();
  }
return 0;}
