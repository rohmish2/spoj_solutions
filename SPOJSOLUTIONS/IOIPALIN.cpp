// Problem: IOIPALIN
// Submission ID: 25663096
// Language: 72648

#include <iostream>

using namespace std;
int s[6000][6000];
int main()
{  int l;

   string a;
   cin>>l>>a;
   for(int i=l;i>=0;i--)
        for(int j=i;j<=l;j++)
          { if(a[i-1]==a[j-1])
                 s[i][j]=min(s[i+1][j-1],1+min(s[i+1][j],s[i][j-1]));
             else
                 s[i][j]=1+min(s[i+1][j],s[i][j-1]);
          }


    cout<<s[1][l];
   return 0;
}
