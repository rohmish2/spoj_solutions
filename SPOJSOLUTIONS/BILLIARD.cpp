// Problem: BILLIARD
// Submission ID: 26200134
// Language: 4564

#include<bits/stdc++.h>
using namespace std;
int main()
{
double a,b,s,m,n;
double vx,vy,pi=2*acos(0);
cin>>a>>b>>s>>m>>n;
while(a!=0)
{
vx=m*a/s;
vy = n*b/s;
printf("%.2lf %.2lf\n",atan(vy/vx)*180/pi,sqrt(vx*vx+vy*vy));
    cin>>a>>b>>s>>m>>n;      
}      return 0;}