// Problem: PARTY
// Submission ID: 25488808
// Language: 4680

#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    { long a,b;
    cin>>a>>b;
    if(a==0&&b==0)
         return 0;
    vector<pair<long ,long>>party(b+1);
    for(int i=1;i<=b;i++)
        cin>>party[i].first>>party[i].second;
    vector<vector<long>>arr(b+1,vector<long>(a+1,0));
    for(int i=1;i<=b;i++)
    { for(int j=1;j<=a;j++)
        {// cout<<i<<" "<<j<<endl;
            if(party[i].first>j)
               arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=max(arr[i-1][j],party[i].second+arr[i-1][j-party[i].first]);
        }
    }
    long maxi=arr[b][a];
     long j;
     for( j=a;j>0&&arr[b][j]==maxi;j--);

     cout<<j+1<<" "<<maxi<<endl;

    }
    return 0;
}
