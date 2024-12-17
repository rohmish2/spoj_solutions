// Problem: AIBOHP
// Submission ID: 25660656
// Language: 198824

#include<bits/stdc++.h>
using namespace std;
int main()
{long t;
cin>>t;
while(t--)
{
    string a;
    cin>>a;
    vector<vector<long>>v(a.size(),vector<long>(a.size(),0));

    for(int len=a.size(),k=0;len>0;len--,k++)
    {
        for(int i=0,j=k;i<len;i++,j++)
        { //cout<<i<<" "<<j<<endl;
            if(i==j)
                v[i][j]=0;

            else
            { if(a[i]==a[j])
               {
                if(j-i==1)
                   v[i][j]=0;
                else
                   v[i][j]=v[i+1][j-1];

               }
              else
              {if(j-i==1)
                   v[i][j]=1;
               else
                   v[i][j]=min(v[i+1][j-1]+2,min(v[i][j-1]+1,v[i+1][j]+1));


              }

            }
        }}

cout<<v[0][a.size()-1]<<endl;}



return 0;}
