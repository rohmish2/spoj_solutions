// Problem: ORDERSET
// Submission ID: 25892609
// Language: 25240

#include<bits/stdc++.h>
using namespace std;
int c[200011],kth[200011],hashi[200011];
struct query{
char a;
long b;
query(char q,long qu)
{ a=q;
 b=qu;
}
};
int getk(int b)//correct
{
    int sum=0;
 while(b>0)
 {   sum+=kth[b];
     b-=((b)&(-1*b));
 }
 return sum;
}
void place(int a)//correct
{ int temp=a;
    if(hashi[a]==0)
    {while(a<=200000)
    { //cout<<a<<endl;
      kth[a]++;
      a+=((a)&(-1*a));
    }
    hashi[temp]=1;
    }

}
void del(int a)
{   if(hashi[a]==1)
    {hashi[a]=0;
    while(a<=200000)
    { kth[a]--;
      a+=((a)&(-1*a));
    }
    }
    }
int cnti(int t)
{ return getk(t-1);
}
int kath(int a)
{ int h=200000,l=0, mid=(h+l)/2,ans;
//cout<<getk(h)<<"a="<<a<<endl;
  if(getk(h)>=a)
  {while(h>=l)
  { mid=(h+l)/2;
      //cout<<h<<" "<<l
     int st=getk(mid);
     if(st>=a)
      {h=mid-1;
      ans=mid;}
     else
      l=mid+1;

  }
  return ans;
  }
  else
    return -1;
}

int main()
{ int n;
  vector<int>s;
  scanf("%d",&n);
  vector<query>q;
  while(n--)
  { char c;
    int a;
    scanf(" %c%d",&c,&a);
    //cin>>c>>a;
    s.push_back(a);
    q.push_back(query(c,a));
}
sort(s.begin(),s.end());
unordered_map<int,int> mp,mp2;
int cnt=2;
mp[s[0]]=1;
mp2[1]=s[0];
for(int i=1;i<s.size();i++)
{ if(s[i]!=s[i-1])
   {mp[s[i]]=cnt;
    mp2[cnt]=s[i];
   cnt++;}}
for(auto i:q)
{ //cout<<"d";
 if(i.a=='I')
   {
   place(mp[i.b]);
   }
 if(i.a=='D')
  {
     del(mp[i.b]);
  }
 if(i.a=='C')
    { printf("%d\n",cnti(mp[i.b]));
      //cout<<cnti(mp[i.b])<<endl;
  }
 if(i.a=='K')
 { int sample=kath(i.b);
  if(sample!=-1)
   printf("%d\n",mp2[sample]);
  else
    printf("invalid\n");
 }
}

return 0;}
