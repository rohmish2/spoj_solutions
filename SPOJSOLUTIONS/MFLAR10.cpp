// Problem: MFLAR10
// Submission ID: 25643192
// Language: 4592

#include<bits/stdc++.h>
using namespace std;
int main()
{ string a;
  vector<char>responses;
  while(1)
  {getline(cin,a);
   if(a=="*")
        break;
   int k=0;
   char s=a[0];
   for(int i=1;i<a.size();i++)
  {  if(toupper(a[i])!=toupper(s)&&a[i-1]==' '&&a[i]!=' ')
       {
           k=1;
           break;
       }
  }
  if(k==0)
  responses.push_back('Y');
  else
  responses.push_back('N');
  }
  for(auto j:responses)
    cout<<j<<endl;
return 0;}
