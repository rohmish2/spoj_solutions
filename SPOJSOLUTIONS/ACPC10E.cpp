// Problem: ACPC10E
// Submission ID: 26067534
// Language: 4700

#include<bits/stdc++.h>
using namespace std;

using namespace std;

typedef long long LL;
LL f(LL n) {
  LL m = 1;
  while (m < n) m *= 2;
  return m;
}

int main() {
  LL G, T, A, D;
  while (scanf("%lld %lld %lld %lld", &G, &T, &A, &D), G > 0) {
    LL m = G * T * (T-1) / 2;     LL n = G * A + D;
    LL e = f(n) - n;
    n += e;
    m += n-1;
        printf("%lld*%lld/%lld+%lld=%lld+%lld\n", G,A,T,D,m,e);
  }
return 0;}
