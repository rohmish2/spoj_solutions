// Problem: RATING
// Submission ID: 26036066
// Language: 8296

#include<bits/stdc++.h>
using namespace std;
struct rating{
int r1,r2,index;
};
int bit[1000000];
void update(int in,int val=1)
{ while(in<1000000)
  { bit[in]+=val;
    in+=(in&-in);
  }
}
int query(int in)
{ int sum=0;
while(in>0)
{   sum+=bit[in];
    in-=(in&-in);
}
return sum;
}

int main()
{ int n;
  scanf("%d",&n);
  vector<rating>a(n);
  for(int i=0;i<n;i++)
    {scanf("%d%d",&a[i].r1,&a[i].r2);
    a[i].index=i;}
  sort(a.begin(),a.end(),[](rating a1,rating b1){
               if(a1.r1!=b1.r1)
               return a1.r1<b1.r1;
               return a1.r2<b1.r2;
        });
  //cout<<endl;


  vector<int>sol(n);
  int key=0,val=1;
  for(int i=0;i<n;i++)
  { sol[a[i].index]=query(a[i].r2);


  if(i==n-1||!(a[i].r1==a[i+1].r1&&a[i].r2==a[i+1].r2))
  {update(a[i].r2,val);
  val=1;}
  else
  {val++;}

  }
  for(auto i:sol)
    printf("%d\n",i);

  return 0;}
