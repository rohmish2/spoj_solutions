// Problem: TIPTOP
// Submission ID: 25874192
// Language: 4640

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int t ;
scanf("%d", &t);
int c = 1;
while(t--)
{
long long int num;
scanf("%lld", &num);
long long int srt = sqrt(num) ;
if( srt*srt == num )
printf("Case %d: Yes\n", c);
else
printf("Case %d: No\n", c);
c++;
}
}