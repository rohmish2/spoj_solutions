// Problem: BALLSUM
// Submission ID: 26007260
// Language: 4692

#include <bits/stdc++.h>

using namespace std;
unsigned long long gcd(unsigned long long a,unsigned long long b)
{
    if(b==0)
     return a;
     else
     return gcd(b,a%b);
}
int main()
{
    long a,b;
    scanf("%ld%ld",&a,&b);
    while(a!=-1)
    {unsigned long long den,num;
        if(a%2==0)
            {den=(a/2)*(a-1);}
         else
            {den=((a-1)/2)*a;}

    //printf("den=%llu\n",den);
    if((b-2)%2==0)
        num=((b)*((b-2)/2))/2;
    else
        num=((b-1)*(b-1)/2)/2;
    //printf("num=%llu\n",num);
    unsigned long long nu=gcd(num,den);
    if(num==0)
        printf("0\n");
    else if(num==den)
        printf("1\n");
    else
    printf("%llu/%llu\n",num/nu,den/nu);

    scanf("%ld%ld",&a,&b);
    }
    return 0;
}
