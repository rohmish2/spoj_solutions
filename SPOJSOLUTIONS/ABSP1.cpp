// Problem: ABSP1
// Submission ID: 25589116
// Language: 4552

#include<stdio.h>

int main()

{

    int t;

    scanf("%d",&t);

    while(t--)

    {

        int n,i;

        scanf("%d",&n);

        long long int a[n],s=0;

        for(i=0;i<n;i++)

            scanf("%lld",&a[i]);

        for(i=n-1;i>=0;i--)

            s= s+ (i*a[i]) - a[i]*(n-1-i);

        printf("%lld\n",s);



    }

    return 0;

}