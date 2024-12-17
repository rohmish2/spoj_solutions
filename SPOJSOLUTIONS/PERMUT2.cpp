// Problem: PERMUT2
// Submission ID: 25475536
// Language: 4492

#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    { long long s;
    cin>>s;
    if(s==0)
        return 0;
    vector<long long>v(s+1,0);
    for(int i=1;i<=s;i++)
        cin>>v[i];
    int k=0;
     for(int i=1;i<=s;i++)
        if(v[v[i]]!=i)
              {k=1;
              break;}

    if(k==0)
        cout<<"ambiguous"<<endl;
    else
        cout<<"not ambiguous"<<endl;

    }
    return 0;
}
