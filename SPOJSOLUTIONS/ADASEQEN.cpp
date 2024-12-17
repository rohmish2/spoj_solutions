// Problem: ADASEQEN
// Submission ID: 26593307
// Language: 19072

#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,mi;
    cin>>n>>mi;
    vector<vector<int>>a(n+1,vector<int>(mi+1,0));
    unordered_map<int,int>m;
    for(int i=0;i<26;i++)
    {int tmp;cin>>tmp;m[i]=tmp;}
    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    for(int i=1;i<=n;i++)
       for(int j=1;j<=mi;j++)
         { if(s1[i-1]!=s2[j-1])
              a[i][j]=max(a[i-1][j],a[i][j-1]);
           else
              a[i][j]=max(a[i-1][j-1]+m[s1[i-1]-'a'] ,max(a[i-1][j],a[i][j-1]));

          ans=max(ans,a[i][j]);
         }

    cout<<ans;
    return 0;
}
