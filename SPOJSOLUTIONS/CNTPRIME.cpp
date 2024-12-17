// Problem: CNTPRIME
// Submission ID: 26607693
// Language: 5836

#include<bits/stdc++.h>
using namespace std;
bool a[2000000];

void segi(int node,int s1,int s2,vector<int>&s,vector<int>&aa)
{ if(s1==s2)
   {   if(!a[aa[s1]])//if this shit is prime 1
       s[node]=1;
       return ; }
  int mid=(s1+s2)>>1;
  segi(2*node+1,s1,mid,s,aa);
  segi(2*node+2,mid+1,s2,s,aa);
  s[node]=s[2*node+1]+s[2*node+2];
 }
 //checked till here

void updt(int node,int s1,int s2,int ll,int r,vector<int>&s,vector<int>&l,int v)
{
 if(l[node]!=-1)
   {
     s[node]=(s2-s1+1)*l[node];//shi hai utna return

     if(s1!=s2)
     { l[2*node+1]=l[node];//passing om to nodes
       l[2*node+2]=l[node];//passing on to nodes
     }
      l[node]=-1;//after passing val reset it
   }
   if(s2<ll||s1>r)//out of range no need to update
   return ;
 if(s1>=ll&&s2<=r)//in range
   {s[node]=(s2-s1+1)*v;//correct

    if(s1!=s2)
     { l[2*node+1]=v;//passing on to nodes
       l[2*node+2]=v;//passing on to nodes
     }
    return;
   }
 int mid=(s1+s2)>>1;
     updt(2*node+1,s1   ,mid ,ll,r,s,l,v);
     updt(2*node+2,mid+1,s2  ,ll,r,s,l,v);
     s[node]=s[2*node+1]+s[2*node+2];//setting after updatation
}
int segv(int node,int s1,int s2,int ll,int r,vector<int>&s,vector<int>&l)
{  if(l[node]!=-1)
   {
     s[node]=(s2-s1+1)*l[node];//shi hai utna return

     if(s1!=s2)
     { l[2*node+1]=l[node];//passing om to nodes
       l[2*node+2]=l[node];//passing on to nodes
     }
      l[node]=-1;//after passing val reset it
   }

    if(s2<ll||s1>r)
    return 0;//return zero useless node
 if(s1>=ll&&s2<=r)//in the range
   { //no need to update
       return s[node];}


  int mid=(s1+s2)>>1;
 int a1=segv(2*node+1,s1,mid,ll,r,s,l);
 int a2=segv(2*node+2,mid+1,s2,ll,r,s,l);
 return a1+a2;

}
int main()
{
    for(int i=2;i*i<2000000;i++)
     {   if(!a[i])
            for(int j=i*i;j<2000000;j+=i)
                a[j]=true;
     }
a[1]=true;
a[0]=true;

  int t;
  scanf("%d",&t);
  int cccc=1;
  while(t--)
  { int n;
    printf("Case %d:\n",cccc);
    cccc++;
    scanf("%d",&n);
    int q;
    scanf("%d",&q);
    vector<int>aa(n);
    for(int i=0;i<n;i++)
        scanf("%d",&aa[i]);
    vector<int>seg(5*n,0),laz(5*n,-1);
    segi(0,0,n-1,seg,aa);


    while(q--)
    { int k;
      scanf("%d",&k);
        if(k==1)
        {
           int l,r;
           scanf("%d%d",&l,&r);
           l--;r--;
           printf("%d\n",segv(0,0,n-1,l,r,seg,laz));
        }
       else
       {  int l,r,val;
           scanf("%d%d%d",&l,&r,&val);
           l--;r--;
           if(!a[val])
            {//cout<<"prime";
                updt(0,0,n-1,l,r,seg,laz,1);}
            else
            updt(0,0,n-1,l,r,seg,laz,0);
       }

    }


  }

return 0;}
