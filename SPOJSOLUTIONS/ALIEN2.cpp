// Problem: ALIEN2
// Submission ID: 26598277
// Language: 4696

#include<bits/stdc++.h>
#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 10005, inf = 0x3f3f3f3f;

int n, k, a[maxn], b[maxn], dp[maxn][2];


using namespace std;
int main() {
	cin>>n>>k;

	for(int i = 1; i <= n; i++) cin>>a[i];
	for(int i = 1; i <= n; i++) cin>>b[i];;

	dp[1][0] = a[1]; dp[1][1] = b[1];
	for(int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][0] + a[i]; dp[i][1] = dp[i - 1][1] + b[i];
		dp[i][0] = min(dp[i][0], dp[i][1] + a[i]);
		dp[i][1] = min(dp[i][1], dp[i][0] + b[i]);
		if(dp[i][0] > k && dp[i][1] > k) {
			printf("%d %d\n", i - 1, min(dp[i][0] - a[i], dp[i][1] - b[i]));
			return 0;
		}
	}

	printf("%d %d\n", n, min(dp[n][0], dp[n][1]));
	return 0;
}
