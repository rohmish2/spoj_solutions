// Problem: DCRYPT
// Submission ID: 26156768
// Language: 4616

#include<bits/stdc++.h>
using namespace std;
char l[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char u[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char ke[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main()
{ int t;
  scanf("%d",&t);
  while(t--)
    { int key;
      scanf("%d",&key);
      if(key<=25)
       { string s;
         cin>>s;
         for(auto i:s)
         { if(i=='.')
            {cout<<" ";
            continue;}
             if(isupper(i))
             cout<<u[((i-'A')+key)%26];
             else
             cout<<l[((i-'a')+key)%26];

         }
       }
      else
      {string s;
         cin>>s;
         for(auto i:s)
         { if(i=='.')
            {cout<<" ";
            continue;}
             if(isupper(i))
              { char temp=tolower(i);
                int nk=key%26;
                cout<<l[((temp-'a')+key)%26];
              }
             else
             {  char temp=toupper(i);
                int nk=key%26;
                cout<<u[((temp-'A')+key)%26];
             }

         }

      }
    cout<<endl;}
  return 0;}
