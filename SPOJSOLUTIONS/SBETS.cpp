// Problem: SBETS
// Submission ID: 25997458
// Language: 4624

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout << "Hello world!" << endl;
    int t;
    scanf("%d",&t);
    while(t--)
    { map<string,int>a;
      int c=16;
      while(c--)
      { string a1,a2;
        int s1,s2;
        cin>>a1>>a2>>s1>>s2;
        if(s1>s2)
            a[a1]++;
        else
            a[a2]++;
        }
     for(auto k:a)
     { if(k.second==4)
         {cout<<k.first<<"\n";
         break;}
     }


    }
    return 0;
}
