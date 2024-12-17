// Problem: AE2A
// Submission ID: 26641609
// Language: 25488

#include<bits/stdc++.h>
using namespace std;
double dp[600][5000];

int main()
{
        for(int i = 1; i < 7; i++) dp[1][i] = 1.0 / 6.0;
        for(int i = 2; i < 600; i++) {
                for(int j = 0; j < 5000; j++) {
                        for(int k = 1; k < 7; k++) {
                                if(j - k >= 0)
                                        dp[i][j] += (dp[i - 1][j - k] / 6.00);
                        }
                }
        }
        int t;
        scanf("%d", &t);
        while(t--) {
                int n, k;
                scanf("%d %d", &n, &k);
                if(n > 558 || k > 4991 ) {
                        puts("0");
                } else {
                        long long ans = dp[n][k] * 100.00;
                        printf("%lld\n", ans);
                }
        }
        return 0;
}