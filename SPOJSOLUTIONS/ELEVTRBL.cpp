// Problem: ELEVTRBL
// Submission ID: 25642734
// Language: 9732

#include<bits/stdc++.h>
using namespace std;
long visited[1000010];
long d[1000010];
int main()
{
long f,s,g,u,dw;
cin>>f>>s>>g>>u>>dw;
queue<long>q;
q.push(s);
visited[s]=1;
d[s]=0;
while(!q.empty())
{ 
  if(visited[g]==1)
        break;
  if(q.front()+u<=f&&visited[q.front()+u]==0)
      { q.push(q.front()+u);
        visited[q.front()+u]=1;
        d[q.front()+u]=d[q.front()]+1;
      }
  if(q.front()-dw>0&&visited[q.front()-dw]==0)
      { q.push(q.front()-dw);
        visited[q.front()-dw]=1;
        d[q.front()-dw]=d[q.front()]+1;
      }
  q.pop();
}
if(visited[g]==0)
    cout<<"use the stairs";
else
    cout<<d[g];
return 0;
}
