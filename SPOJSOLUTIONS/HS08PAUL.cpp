// Problem: HS08PAUL
// Submission ID: 26138294
// Language: 44556

#include<bits/stdc++.h>
using namespace std;
int main()
{vector<bool>a(10000000,false);
vector<bool>b(10000000,false);

 for(int i=2;i*i<10000000;i++)
     {if(a[i]==false)
        for(int j=i*i;j<10000000;j+=i)
            a[j]=true;}
        

  for( long int i=1;i*i<10000000;i++)
    for(long int j=1; (j*j*j*j)+(i*i)<10000000;j++)
      {  if(a[(j*j*j*j)+(i*i)]==false)
           { b[(j*j*j*j)+(i*i)]=true;}
            
      //cout<<i<<" "<<j<<" "<<(j*j*j*j)+(i*i)<<endl;
      }
 vector<int>prefix(10000000,0);
 for(int i=2;i<10000000;i++)
 { prefix[i]=prefix[i-1];
   if(b[i]==true)
      prefix[i]++;
 }
 int t;
 scanf("%d",&t);
 while(t--)
 { int w;
   scanf("%d",&w);
   printf("%d\n",prefix[w]);
     
 }
return 0;}
