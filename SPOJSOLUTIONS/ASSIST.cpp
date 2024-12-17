// Problem: ASSIST
// Submission ID: 25827162
// Language: 4636

#include<bits/stdc++.h>
using namespace std;
//bool sieve[100010];
int ans[3001];
int main()
{ list<int>a;
    for(int i=2;i<=34000;i++)
        a.push_back(i);


    for(int i=1;i<=3000;i++)
     { ans[i]=a.front();
       int mm=a.front();
       for(auto i=a.begin();i!=a.end();)
          { auto q=i;
            for(int j=0;j<mm;j++)
              {q++;
               if(q==a.end())
                break;
              }
             a.erase(i);
            i=q;

          }
     }
     int aa;
     cin>>aa;
 while(aa!=0)
 {
     cout<<ans[aa]<<endl;
   cin>>aa;
 }
return 0;}
