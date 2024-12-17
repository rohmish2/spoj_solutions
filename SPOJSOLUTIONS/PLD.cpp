// Problem: PLD
// Submission ID: 26166356
// Language: 4840

#include<stdio.h>
#include<string.h>
//using namespace std;
int main()
{ int k;
  scanf("%d",&k);
  char a[40000];
  scanf("%s",a);
  int cnt=0;
  for(int i=0;i+k-1<strlen(a);i++)
  { int j=i+k-1;
      int st=i;
    int q=1;
      while(j>=st)
      { if(a[j]!=a[st])
        {q=0;
        break;}
        st++;
        j--;
      }
      q==1?cnt++:cnt;
  }
  printf("%d",cnt);

  return 0;}
