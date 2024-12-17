// Problem: FUNPROB
// Submission ID: 26059042
// Language: 4512

#include<stdio.h>

int main()

{

     int m=1,n=1;

     double x,y;

     while(m!=0 && n!=0)

     {

         scanf("%d%d",&n,&m);

         if(n!=0 && m!=0)

         {

             if(n>m || m==0)

                printf("0.000000\n");

             else if(n==0)

                printf("1.000000\n");

             else

             {

                 x=m;

                 y=n;

                 printf("%.6lf\n",(x-y+1.0)/(x+1.0));

             }



         }

     }

     return 0;

}