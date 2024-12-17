// Problem: PPATH
// Submission ID: 25503515
// Language: 4788

#include<bits/stdc++.h>
using namespace std;
int prime[10000];
int main()
{
    for(int i=2;i*i<10000;i++)
    for(int j=i*i;j<10000;j+=i)
        prime[j]=1;
    int t;
    cin>>t;
   while(t--)
   { int a,b;
     cin>>a>>b;
     vector<bool>v(10000,false);
     vector<long>path(10000,-1);
     queue<int>q;
     q.push(a);
     path[a]=0;
     v[a]=true;
     while(!q.empty())
     { if(q.front()==b)
        break;
      for(int i=1;i<=9;i++)//change 1st digit
       { if(i!=q.front()/1000)
           { if(!v[i*1000+q.front()%1000]&&prime[i*1000+q.front()%1000]==0)
              {q.push(i*1000+q.front()%1000);
               path[i*1000+q.front()%1000]=path[q.front()]+1;
               v[i*1000+q.front()%1000]=true;
             }
           }
       }
      for(int i=0;i<=9;i++)//change 2nd digit
       { if(i!=(q.front()/100)%10)
           { if(!v[(q.front()/1000)*1000+ i*100+ q.front()%100]&&prime[(q.front()/1000)*1000+ i*100+ q.front()%100]==0)
               {q.push((q.front()/1000)*1000+ i*100+ q.front()%100);
               path[(q.front()/1000)*1000+ i*100+ q.front()%100]=path[q.front()]+1;
               v[(q.front()/1000)*1000+ i*100+ q.front()%100]=true;
               }
           }
       }
     for(int i=0;i<=9;i++)//change 3rd digit
       { if(i!=(q.front()/10)%10)
           { if(!v[(q.front()/100)*100+i*10+q.front()%10]&&prime[(q.front()/100)*100+i*10+q.front()%10]==0)
               {q.push((q.front()/100)*100+i*10+q.front()%10);
               path[(q.front()/100)*100+i*10+q.front()%10]=path[q.front()]+1;
               v[(q.front()/100)*100+i*10+q.front()%10]=true;
               }
           }
       }
     for(int i=0;i<=9;i++)//change 1st digit
       { if(i!=q.front()%10)
           { if(!v[((q.front()/10)*10)+i]&&prime[((q.front()/10)*10)+i]==0)
               {q.push(((q.front()/10)*10)+i);
                path[((q.front()/10)*10)+i]=path[q.front()]+1;
                v[((q.front()/10)*10)+i]=true;
                }
           }
       }
     q.pop();
     }
     path[b]==-1?cout<<"Impossible":cout<<path[b];
     cout<<endl;
   }
return 0;}
