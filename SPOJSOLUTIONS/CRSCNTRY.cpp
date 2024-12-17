// Problem: CRSCNTRY
// Submission ID: 25612730
// Language: 4560

#include<bits/stdc++.h>
using namespace std;
long long lcs(vector<long long>a,vector<long long >b)
{ vector<vector<long long>>r(a.size()+1,vector<long long>(b.size()+1,0));
    for(int i=1;i<=a.size();i++)
        for(int j=1;j<=b.size();j++)
        { if(a[i-1]==b[j-1])
            r[i][j]=max(r[i][j-1],max(r[i-1][j-1]+1,r[i-1][j]));
            else
            r[i][j]=max(r[i-1][j],r[i][j-1]);
        }

return r[a.size()][b.size()];}
int main()
{
    int t;
    cin>>t;
    while(t--)
    { vector<vector<long long>>a;
      while(1)
      { vector<long long>v;
          long long b;
        cin>>b;
        if(b==0)
            break;
        else
        v.push_back(b);
        while(v.back()!=0)
        { cin>>b;
          v.push_back(b);
        }
        v.pop_back();
       a.push_back(v);
      }
      long long maxi=0;
     for(int i=1;i<a.size();i++)
     {

     maxi=max(maxi,lcs(a[0],a[i]));

     }

    cout<<maxi<<endl;
    }
return 0;}
