// Problem: PHONELST
// Submission ID: 25571692
// Language: 719008

#include<bits/stdc++.h>
using namespace std;
struct node
{ map<char,node*>mp;
  bool isend;
  node()
  {isend=false;
   for(char i=0;i<=9;i++)
    mp[i]=NULL;
  }
};
int check(string a,node *n,long long int c)
{ //cout<<a<<"  "<<a[c];
    if(n->mp[a[c]]!=NULL)
    {
      if(n->mp[a[c]]->isend==true||c==a.size()-1)//if next element is ending or this is the last element
            return -1;
      return check(a,n->mp[a[c]],c+1);

    }
    else
    { //  cout<<c<<"newnnode!!"<<endl;
         node *p=new node();
        n->mp[a[c]]=p;
        if(c!=a.size()-1)
        return check(a,n->mp[a[c]],c+1);
        else
          n->mp[a[c]]->isend=true;
   }

return 1;
}
int main()
{ long long t;
  cin>>t;
  while(t--)
    {  node* s=new node();
        long long n,k=0;
        cin>>n;
        while(n--)
        { string a;
          cin>>a;
          if(k==0||k==1)
          k=check(a,s,0);
          //cout<<"k="<<k;
        }
        k==1?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
return 0;}
