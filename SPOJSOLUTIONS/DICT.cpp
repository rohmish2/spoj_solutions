// Problem: DICT
// Submission ID: 26098658
// Language: 46924

#include<bits/stdc++.h>
using namespace std;
struct trie{
//char s;
trie  *a[26]={NULL};
bool isend;
};
void insertion(trie *k,string b,int in)
{
  if(in==b.size())
        {   k->isend=true;
            return;}

  if(k->a[b[in]-'a']==NULL)
  {
      trie *k1=new (trie);

    k1->isend=false;
    k->a[b[in]-'a']=k1;
  }

   insertion(k->a[b[in]-'a'],b,in+1);
}
void dfs(trie *k,string a,string org)
{ if(k->isend==true&&a!=org)
   cout<<a<<endl;
   char o='a';
  for(int i=0;i<26;i++,o++)
  {   if(k->a[i]!=NULL)
         dfs(k->a[i],a+o,org);

  }


}
int main()
{ trie *k=new trie;
  k->isend=false;
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  { string a;
    cin>>a;
    insertion(k,a,0);
    }
 int p;
 scanf("%d",&p);
 int cnt=1;
 while(p--)
 { cout<<"Case #"<<cnt++<<":\n";
     string a;
   cin>>a;
   trie *o=k;
   int key=0;
   for(int i=0;i<a.size();i++)
    { if(o->a[a[i]-'a']!=NULL)
        o=o->a[a[i]-'a'];
       else
        {key=-1;
        break;}
    }
    if(key==-1)
        cout<<"No match.\n";
    else
      { int def=0;
          for(auto i:o->a)
          { if(i!=NULL)
              {def=1;
              break;}
          }
        if(def==0)
           cout<<"No match.\n";
        else
        dfs(o,a,a);
      }
 }
 return 0;}
