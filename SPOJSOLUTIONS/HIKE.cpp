// Problem: HIKE
// Submission ID: 26598079
// Language: 10592

#include<bits/stdc++.h>
using namespace std;

int main()
{ int n;
  cin>>n;
  while(n!=0)
  { vector<vector<char>>a(n+1,vector<char>(n+1));
   // vector<bool>a(900000);
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        cin>>a[i][j];
    long st=p1*10000+p2*100+p3;
    queue<long>q;
    q.push(st);
    vector<int>m(900000,-1);
    m[st]=0;
    int ans=-1;
    while(!q.empty())
    { long number=q.front();
        //cout<<number<<endl;
        p1=(number/10000)%100 ;p2=(number/100)%100;p3=number%100 ;
       if(p1==p2&&p2==p3)
            {ans=m[number];
            break;}
        //move p1
         char req=a[p2][p3];
         for(int i=1;i<=n;i++)
            { if(a[p1][i]==req&&m[i*10000+p2*100+p3]==-1)
                { q.push(i*10000+p2*100+p3);
                  m[i*10000+p2*100+p3]=m[number]+1;
                }

            }
        //move p2
        req=a[p1][p3];
        for(int i=1;i<=n;i++)
           {
              if(a[p2][i]==req&&m[p1*10000+i*100+p3]==-1)
                { q.push(p1*10000+i*100+p3);
                  m[p1*10000+i*100+p3]=m[number]+1;
                }
           }
        //move p3
        req=a[p2][p1];
       for(int  i=1;i<=n;i++)
          {
              if(a[p3][i]==req&&m[p1*10000+p2*100+i]==-1)
                { q.push(p1*10000+p2*100+i);
                  m[p1*10000+p2*100+i]=m[number]+1;
                }
          }
     q.pop();
    }
    if(ans==-1)
        cout<<"impossible\n";
     else
     cout<<ans<<"\n";
    cin>>n;}
return 0;}
