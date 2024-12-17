// Problem: BADXOR
// Submission ID: 26169324
// Language: 7768

#include<bits/stdc++.h>
#define mod 100000007
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	for(int z=1;z<=t;z++){
		int i,j,m,n,c=0;
		scanf("%d %d", &n, &m);
		int arr[n];
		unordered_set<int> s;
		int dp[n+1][1024];
		memset(dp, 0, sizeof(dp));
		for(i=0;i<n;i++){
			scanf("%d", &arr[i]);
		}
		for(i=0;i<m;i++){
			int x;
			scanf("%d", &x);
			s.insert(x);
		}
		dp[0][0]=1;
		for(i=1;i<=n;i++){
			for(j=0;j<=1023;j++){
				dp[i][j]=(dp[i-1][j]+dp[i-1][j^arr[i-1]])%mod;
			}
		}
		for(i=0;i<1024;i++){
			if(s.find(i)==s.end()){
				c=(c+dp[n][i])%mod;
			}
		}
		printf("Case %d: %d\n", z, c);
	}
	return 0;
}