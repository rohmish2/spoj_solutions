// Problem: HEPNUM
// Submission ID: 26085597
// Language: 4640

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a,b;
    cin>>a>>b;
    while(a!="*")
    { while(a.size()<b.size())
       a='0'+a;
       while(a.size()>b.size())
       b='0'+b;
       if(a>b)
        printf(">\n");
       else if(a<b)
        printf("<\n");
       else
        printf("=\n");
    cin>>a>>b;
    }


return 0;}
