// Problem: INVCNT
// Submission ID: 25484084
// Language: 7992

#include<bits/stdc++.h>
using namespace std;
void m(long int l,long int hi);
void merg(long int l,long int m,long int h);
vector<long int>ar;
long  int inv=0;
int main()
{ long int test;
 cin>>test;
    while(test--)
    {long int t;
  cin>>t;
  for(int i=0;i<t;i++)
  { long int te;
    cin>>te;
    ar.push_back(te);
  }
  m(0,t-1);
  cout<<inv<<endl;
  ar.clear();
  inv=0;
  }
return 0;}
void m(long int l,long int hi)
{
    void merg(long int l,long int m,long int h);
 if(hi>l)
{long int mid=(l+hi)>>1;
  m(l,mid);
  m(mid+1,hi);
 merg(l,mid,hi);

}
}
void merg(long int l,long int m,long int h)
{
long int ptr1=l,ptr2=m+1;//l-[m]  , m+1-[h]
vector<long int>a;
while(ptr1<=m&&ptr2<=h)
 { if(ar[ptr1]<=ar[ptr2])
    {
        a.push_back(ar[ptr1]);
        ptr1++;
    }
    else
        {  inv+=(m-ptr1+1);
            a.push_back(ar[ptr2]);
         ptr2++;}
 }
 while(ptr1<=m)
 {a.push_back(ar[ptr1]);
   ptr1++;
 }
 while(ptr2<=h)
 {   inv+=(m-ptr1+1);
     a.push_back(ar[ptr2]);
   ptr2++;
 }
 //cout<<"l="<<l<<"h="<<h;
for(long int i=l,j=0;i<=h;i++,j++)
{
ar[i]=a[j];

}
//cout<<endl;
}
