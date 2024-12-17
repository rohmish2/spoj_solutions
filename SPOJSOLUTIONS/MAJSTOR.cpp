// Problem: MAJSTOR
// Submission ID: 26596519
// Language: 4824

#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
  cin>>n;
  string a;
  cin>>a;
  map<char,int>mp;
  mp['P']=0;
  mp['S']=1;
  mp['R']=2;
  vector<vector<int>>a1(n,vector<int>(3,0));
  int t;
  cin>>t;
  int act=0;
  while(t--)
  {  for(int i=0;i<n;i++)
       { char ss;
         cin>>ss;
         if(a[i]=='P'&&ss=='R')
            act+=2;
         else if(a[i]=='P'&&ss=='P')
            act+=1;

         if(a[i]=='R'&&ss=='S')
            act+=2;
         else if(a[i]=='R'&&ss=='R')
            act+=1;

         if(a[i]=='S'&&ss=='P')
            act+=2;
         else if(a[i]=='S'&&ss=='S')
            act+=1;
         a1[i][mp[ss]]++;
       }
  }

  int maxi=0;

  for(auto i:a1)
    {
       //take 3 cases
       maxi+=max(2*i[0]+i[1],max(2*i[2]+i[0],2*i[1]+i[2]));
    }
    cout<<act<<"\n"<<maxi;
  return 0;}
