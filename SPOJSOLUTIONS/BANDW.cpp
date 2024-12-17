// Problem: BANDW
// Submission ID: 25833471
// Language: 4648

#include<bits/stdc++.h>
using namespace std;
int main()
{ string s1,s2;
  cin>>s1>>s2;
  while(s1!="*"&&s2!="*")
    {   int cnt=0;
        int part=-2;
        for(int i=0;i<s1.size();i++)
        { if(s1[i]!=s2[i])
            {if(i-1!=part)
               {cnt++;
               }
            part=i;
            }
        }
    cout<<cnt<<endl;
    cin>>s1>>s2;
    }
return 0;}
