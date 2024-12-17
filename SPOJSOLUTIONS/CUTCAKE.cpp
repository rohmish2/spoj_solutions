// Problem: CUTCAKE
// Submission ID: 26079192
// Language: 4740

#include<stdio.h>

#include<math.h>

int main()

{

      long long int n,tn;

      int t;

      scanf("%d",&t);

      while(t--)

      {

          scanf("%lld",&tn);

          if(tn==1)

            printf("0\n");



          else  {

          n= (1 + sqrt(1+ 8*(tn-1)));

          n=n/2;

          printf("%lld\n",n-1);

      } }

      return 0;



}