// Problem: AMR12D
// Submission ID: 25510567
// Language: 4528

#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { string a;
    set<string>m;
    cin>>a;
    for(int i=0;i<a.size();i++)
        for(int j=1;j<=a.size()-i;j++)//length of the string
         { string temp=a.substr(i,j);
           //cout<<temp<<endl;
           m.insert(temp);
         }

   int key=1;
   for(int i=0;i<a.size()&&key==1;i++)
        for(int j=1;j<=a.size()-i;j++)
        {string temp=a.substr(i,j);
         reverse(temp.begin(),temp.end());
         if(m.count(temp)==0)
            {key=0;
             //cout<<"no"<<temp<<" "<<m.count(temp)<<endl;
            break;}
        }
  if(key==1)
    cout<<"YES\n";
  else
    cout<<"NO\n";
  }
return 0;}
