// Problem: M3TILE
// Submission ID: 25644774
// Language: 4432

#include<bits/stdc++.h>
using namespace std;
long long sol[40];
int main()
{  sol[0]=1;
   sol[2]=3;
    for(int i=4;i<40;i++)
        {
          sol[i]=4*sol[i-2]-sol[i-4];
        }
        int t;
       // cin>>t;
        while(1)
         { int k;
           cin>>k;
           if(k==-1)
            return 0;
           cout<<sol[k]<<endl;

         }


return 0;}
