// Problem: LINES
// Submission ID: 26062847
// Language: 4676

#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define INF -1e9
#define SZ 200
using namespace std;
pair<double,double> arr[SZ+5];
bool cmp(pair<double,double>& l,pair<double,double>& r){
        if (l.first!=r.first)
                return (l.first < r.first);
        else
                return (l.second < r.second);
}
int main(){
   
   int n;
   while(1){
    cin>>n;
    if (n==0)
        break;
    else{
     for (int i=0;i<n;i++)
        cin>>arr[i].first>>arr[i].second;
   
    vector < double > q;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
                if (arr[j].first==arr[i].first)
                q.push_back(INF);
            else
                q.push_back((arr[j].second-arr[i].second)/(arr[j].first-arr[i].first));    
        }
      }
     sort(q.begin(),q.end());
     int cnt=1;
     for (int i=1;i<(int)q.size();i++){
        if (q[i]!=q[i-1])
                ++cnt;
     }
    cout<<cnt<<"\n";
    }
   }
   return 0;
}