// Problem: SCAVHUNT
// Submission ID: 26030203
// Language: 4652

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int c=1;
    while(t--)
    { int n;
      cin>>n;
      map<string,string>a;
      map<string,int>o,s;
      for(int i=1;i<n;i++)
         { string s1,s2;
           cin>>s1>>s2;
           a[s1]=s2;
           o[s1]++;
           s[s2]++;
         }
     string tgt;
     cout<<"Scenario #"<<c<<":\n";
     c++;
     for(auto i:o)
     { if(s[i.first]==0)
         {tgt=i.first;
         break;}
     }
     cout<<tgt<<"\n";
     for(int i=1;i<n;i++)
     { cout<<a[tgt]<<endl;
       tgt=a[tgt];
     }

    }
    return 0;
}
