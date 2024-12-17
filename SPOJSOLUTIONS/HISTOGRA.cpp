// Problem: HISTOGRA
// Submission ID: 25508728
// Language: 23568

#include<bits/stdc++.h>
using namespace std;
void make_tree(vector<long long> &a,long long s,long long e,vector<long long>&seg,long long node)
 {   
     if(e>=s)
    {if(e==s)
    { seg[node]=s;
      
    }
    else
    { long long m=(s+e)>>1;
    
      make_tree(a,s,m,seg,node*2+1);
      make_tree(a,m+1,e,seg,node*2+2);
      if(a[seg[node*2+1]]<a[seg[node*2+2]])
        seg[node]=seg[node*2+1];
      else
        seg[node]=seg[node*2+2];
      
    }}
 }

 long long findmin(long long s,long long e,long long ss,long long se,vector<long long>&s1,long long index,vector<long long>&a)
 {
   if(s<=ss&&e>=se)
        return s1[index];
   if (se < s || ss > e)
        return -1;
   long long mid=(ss+se)>>1;
   long long i1=findmin(s,e,ss,mid,s1,2*index+1,a) ,i2=findmin(s,e,mid+1,se,s1,2*index+2,a);
   long long val1,val2;
   
   if(i1==-1)
     return i2;

   if(i2==-1)
     return i1;



   if(a[i2]> a[i1])
   return i1;
    return i2;

 }

 long long find_ans(long long s,long long e,vector<long long>&s1,vector<long long>&s2,vector<long long>&a)
 {   if(s<=e)
     {long long index=findmin(s,e,0,a.size()-1,s1,0,a);//get the index containing least valued element
         long long minh=a[index];
     long long ans=((e-s+1))*minh;
     
     long long x=0,y=0;
     x=find_ans(s,index-1,s1,s2,a);
     y=find_ans(index+1,e,s1,s2,a);
       return max(x,max(ans,y));
     }
     return -1;
 }
int main()
{
    while(1)
    { long long n;
      scanf("%lld",&n);
      if(n==0)
        return 0;
      vector<long long int>s2(n*10),s1(n*10,-1),a(n);
      for(int i=0;i<n;i++)
      scanf("%lld",&a[i]);
            make_tree(a,0,n-1,s1,0);
          
            printf("%lld\n",find_ans(0,n-1,s1,s2,a));

    }
return 0;}
