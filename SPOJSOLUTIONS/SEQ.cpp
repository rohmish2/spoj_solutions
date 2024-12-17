// Problem: SEQ
// Submission ID: 25867365
// Language: 4748

#include<bits/stdc++.h>
#define mod 1000000000
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int k;
     cin>>k;
     vector<long long int>b(k);
     vector<vector<long long int>>c(k,vector<long long int>(k,0));
     vector<vector<long long int>>e(k,vector<long long int>(k,0));
     e[0][0]=1;
     for(int i=1,j=0;i<k;i++,j++)
        {c[i][j]=1;
        e[i][i]=1;
        }
     for(int i=k-1;i>=0;i--){cin>>b[i];}
     for(int i=0;i<k;i++){cin>>c[0][i];}



     long long term;
     cin>>term;
     long long  power=term-k;
     if(power>=1)
     {while(power>1)
     {
      if((power/2)>=1)
       {
         vector<vector<long long int>>q(k,vector<long long int>(k,0));
              for(int i=0;i<k;i++)
                 for(int j=0;j<k;j++)
                    for(int ki=0;ki<k;ki++)
                       q[i][j]=(q[i][j]+(c[i][ki]*c[ki][j])%mod)%mod;

             if(power%2!=0)
                {   vector<vector<long long int>>qe(k,vector<long long int>(k,0));
                    for(int i=0;i<k;i++)
                        for(int j=0;j<k;j++)
                            for(int ki=0;ki<k;ki++)
                                qe[i][j]=(qe[i][j]+(e[i][ki]*c[ki][j])%mod)%mod;

                e=qe;
                }
                c=q;


        power/=2;
       }
     }
     vector<vector<long long int>>q(k,vector<long long int>(k,0));
             for(int i=0;i<k;i++)
                 for(int j=0;j<k;j++)
                    for(int ki=0;ki<k;ki++)
                       q[i][j]=(q[i][j]+(c[i][ki]*e[ki][j])%mod)%mod;
 long long ans=0;
    for(int i=0;i<k;i++)
        ans=(ans+(b[i]*q[0][i])%mod)%mod;
 cout<<ans<<endl;
 }
 else
 cout<<b[k-1-(term-1)]<<endl;
 }

return 0;}
