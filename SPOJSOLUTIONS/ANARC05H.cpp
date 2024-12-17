// Problem: ANARC05H
// Submission ID: 25638150
// Language: 4696

#include<bits/stdc++.h>
using namespace std;
long ans[35][35][50];
long last[35][350];
long sumfinder(int s,int e,string a)
{long sum=0;
   for(int i=s;i<=e;i++)
      sum+=a[i]-'0';
return sum;
}
int main()
{ string a;
     cin>>a;
     long cnt=1;
     while(a!="bye")
       { memset(ans,0,sizeof(ans));
         memset(last,0,sizeof(last));
         long aa=0;
         for(int i=0;i<a.size();i++)
            for(int j=0;j<=i;j++)
                 { long sum=sumfinder(j,i,a);//sum of last term
                   if(j==0)
                    {ans[j][i][sum]+=1;
                     last[i][sum]+=1;//till i this is maxima
                    }
                   else
                     {
                       for(int k=0;k<=sum;k++)
                         {ans[j][i][sum]+=last[j-1][k];




                         }

                       last[i][sum]+=ans[j][i][sum];


                     }
 if(i==a.size()-1)
    {aa+=ans[j][i][sum];}
                 }
        cout<<cnt<<". "<<aa<<endl;
        cin>>a;
       // if(a!="")
        cnt++;
       }
return 0;}
