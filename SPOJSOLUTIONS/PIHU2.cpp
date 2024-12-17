// Problem: PIHU2
// Submission ID: 26083676
// Language: 4832

#include<bits/stdc++.h>
using namespace std;
unsigned long long a[65][65];
unsigned long long comb(int n,int r)
{
    if(n==r || r==0)
        return 1;
    else
    {
        if(a[n][r]!=-1)
            return a[n][r];
        else
        {
            a[n][r]=comb(n-1,r-1)+comb(n-1,r);
            return a[n][r];
        }
    }
}
int main()
{for(int i=0;i<65;i++)
    {
        for(int j=0;j<=i;j++)
        { a[i][j]=-1;
            if(i==j)
            {
                a[i][j]=1;
            }
            else if(j==0)
            {
                a[i][j]=1;
            }
            else if(j==1)
            {
                a[i][j]=i;
            }
            else
            {
                a[i][j]=comb(i,j);
            }

       //cout<<i<<"c"<<j<<" "<<a[i][j]<<endl;
        }}
    int t;
    scanf("%d",&t);
    while(t--)
    { unsigned long long q;
      cin>>q;
      if(q==1||q==2)
        cout<<q<<endl;

      else
      { int ans=3;
        while(a[ans][(ans+1)/2]<q)
        { //cout<<a[ans][(ans+1)/2]<<"  "<<q<<endl;
            ans++;}
        cout<<ans<<endl;

      }


    }


    return 0;}
