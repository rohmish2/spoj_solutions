// Problem: MAIN12A
// Submission ID: 26647306
// Language: 7164

#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("in.txt","r",stdin);	
vector<int>seq;
seq.push_back(1);
seq.push_back(2);
int  prev=1;
for(int i=3;seq.size()<=1000100;i++)
 {
   for(int j=1;j<=seq[prev]&&seq.size()<=1000100;j++)
   	  seq.push_back(i);

 prev++;

 }
int t;
 cin>>t;
 int c=1;
 while(t--)
 { int n;
 	 cin>>n;
 	 printf("Case #%d: %d\n",c++,seq[n-1]);
 	 //cout<<Case #1: <<seq[n-1]<<endl


 }
return 0;}