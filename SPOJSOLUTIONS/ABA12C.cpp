// Problem: ABA12C
// Submission ID: 25583723
// Language: 4680

#include<bits/stdc++.h>
using namespace std;
int k[101];
long long int p[1001];
int main()
{
int t;
cin>>t;
while(t--)
{ memset(p,-1,sizeof(p));
  p[0]=0;
  int price,n;
  cin>>n>>price;

  for(int i=1;i<=price;i++)
    cin>>k[i];


  for(int i=1;i<=price;i++)
   {
     for(int j=1;j<=i;j++)
     { if(k[j]!=-1)
        {
            if(j<=i)
            { if(p[i]!=-1)
              p[i]=min(p[i],k[j]+p[i-j]);
             else if(p[i-j]!=-1)
              p[i]=k[j]+p[i-j];
            }
        }

     }
   }
cout<<p[price]<<"\n";
}

return 0;}
