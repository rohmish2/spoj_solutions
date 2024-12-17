// Problem: FACVSPOW
// Submission ID: 26157401
// Language: 81968

#include <bits/stdc++.h>

using namespace std;
double fact[10000000+10];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    fact[1] = log10(1.0);
    for(int i=2;i<=10000000;i++) fact[i] = fact[i-1] + log10((double)i) ;

    int T ;
    scanf("%d",&T);
    while( T-- )
    {
        int a ;
        scanf("%d",&a);
        int lo = 1 , hi = 10000000 , n = -1 ;

        while( lo<=hi )
        {
            int mid = (lo+hi)/2 ;
            double f = fact[mid] ;
            double g = (double)mid*log10(a);
            if(f>g)
            {
                n = mid ;
                hi = mid - 1 ;
            }
            else lo = mid+1 ;
        }

        printf("%d\n",n);
    }
    return 0;
}