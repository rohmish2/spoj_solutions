// Problem: CTRICK
// Submission ID: 25789534
// Language: 4592

#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>&a,int i)
{ int s=0;
  while(i>0)
  {
      s+=a[i];
      i-=(i&(-1*i));
  }
  return s;
 }
int bin(vector<int>&a,int l,int h,int key)
{int ans=-1;
 int ssss=l;
 while(h>=l)
 {
  int mid=(l+h)>>1;
  int s=sum(a,mid)-sum(a,ssss);
    //cout<<l<<" "<<h<<" "<<mid<<" "<<key<<" "<<s<<endl;
  if(s==key)
    {   ans=mid;
         if(mid!=1)
         h=mid-1;
         else
         return ans;

        }
  else if(s>key)
  {h=mid-1;}
  else
  {l=mid+1;}
 }
return ans;}
int main()
{ int t;
cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>a(n+1,1),b(n+1);
    for(int i=1;i<=n;i++)
       {int j=i+(i&(-1*i));
        while(j<=n)
        {a[j]+=1;
        j+=(j&(-1*j));
        }}

   int lastpos=0;
   for(int i=1;i<=n;i++)
      { int upper=sum(a,n)-sum(a,lastpos);
        //cout<<"b"<<sum(a,n);
        int pos=(i+1)%(n-i+1);
        if(pos==0)
        pos=n-i+1;
        if(upper>=pos)
        {    int u=bin(a,lastpos,n,pos);
             int k=u;

             while(k<=n)
             { //cout<<k;
               a[k]--;
               k+=(k&(-1*k));
             }
             //cout<<i<<"   "<<u<<" "<<sum(a,n)<<endl;
             b[u]=i;
            lastpos=u;
         }
        else
        {    int u=bin(a,0,n,pos-upper);
             int k=u;
             while(k<=n)
             {
               a[k]--;
               k+=(k&(-1*k));
             b[u]=i;
            lastpos=u;
             }
             //cout<<i<<"   "<<u<<" "<<sum(a,n)<<endl;
        }

      }

   for(int i=1;i<=n;i++)
   printf("%d ",b[i]);
   printf("\n");
  }

return 0;}
