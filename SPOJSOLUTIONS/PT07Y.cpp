// Problem: PT07Y
// Submission ID: 25483697
// Language: 4800

#include <bits/stdc++.h>

using namespace std;
int pr=0;
int main()
{  long n,e;
   cin>>n>>e;
   if(e!=n-1)
   {cout<<"NO";
        return 0;}
    vector<vector<long int>>adj(n+1);
    vector<bool>visited(n+1,false);
    vector<long>parents(n+1,-1);

    for(int i=0;i<e;i++)
    {   long a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    visited[1]=true;
    queue<long>q;

    q.push(1);
    while(!q.empty()&&pr!=1)
    {//cout<<q.front()<<endl;
     for(auto i:adj[q.front()])
       { if(parents[q.front()]!=i)
           { if(visited[i]==false)
                {   parents[i]=q.front();
                    visited[i]=true;
                    q.push(i);
                }
             else
                {pr=1;
                 //cout<<q.front()<<"lav"<<i<<endl;
                break;}
           }
       }
     q.pop();
    }
    for(int i=1;i<=n;i++)
    { if(visited[i]==false||pr==1)
       {cout<<"NO";
       return 0;}}
   cout<<"YES";

    return 0;
}

