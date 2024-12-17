// Problem: SUBST1
// Submission ID: 25675232
// Language: 9080

#include<bits/stdc++.h>
using namespace std;
int a[17][1000000];
int r[26],rn[26],rnk[100];
struct var{
int f,s,i;

};
bool com(var a,var b)
{ if(a.f!=b.f) return a.f<b.f;
return  a.s<b.s;}

int main()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
  string s;
  cin>>t;
  while(t--)
 { cin>>s;
   for(int i=0;i<s.size();i++)
     a[0][i]=s[i]-'a';

   int st,c;
   for(c=1,st=1;(st)<s.size();c++,st=st<<1)
    { vector<var>v(s.size());
     for(int i=0;i<s.size();i++){v[i].f=a[c-1][i];v[i].s=i+st<s.size()?a[c-1][i+st]:(-1);v[i].i=i;}
    sort(v.begin(),v.end(),com);
    int cnt=0;
    for(int i=0;i<s.size();i++)
    { if(i!=0&&(v[i].f!=v[i-1].f||v[i].s!=v[i-1].s))cnt++;
       a[c][v[i].i]=cnt;}}
  c--;
   int lcs=0;
   unordered_map<int,int>mapp;
   for(int i=0;i<s.size();i++)
   {mapp[a[c][i]]=i;}
   for(int i=1;i<s.size();i++)
    {  int n1=mapp[i],n2=mapp[i-1];

      for(int j=c;j>=0&&n1<s.size()&&n2<s.size();j--)
         { //cout<<n1<<" "<<a[j][n1]<<"  "<<n2<<" "<<a[j][n2]<<endl;
          if(a[j][n1]==a[j][n2])
                {n1+=1<<j;n2+=1<<j;lcs+=1<<j;}
         //cout<<lcs<<endl;
         }

    }
   //cout<<((s.size())*(s.size()+1))/2<<endl;
  cout<<((s.size())*(s.size()+1))/2-lcs<<endl;
}
 return 0;}
