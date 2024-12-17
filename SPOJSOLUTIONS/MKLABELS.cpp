// Problem: MKLABELS
// Submission ID: 25870280
// Language: 4484

#include <bits/stdc++.h>

using namespace std;
int a[10]={1,1,3,16,125,1296,16807,262144,4782969,100000000};
int main()
{  int n;
int c=1;
cin>>n;
while(n!=0)
{
  printf("Case %d, N = %d, # of different labelings = %d\n",c,n,a[n-1]);
  c++;
cin>>n;}

    return 0;
}
