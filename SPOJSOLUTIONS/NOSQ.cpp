// Problem: NOSQ
// Submission ID: 26596765
// Language: 7668

#include<bits/stdc++.h>
using namespace std;
bool a[100002];

int sum(vector<int>&a,int k)
{ int q=0;
    while(k>0)
    { q+=a[k];
      k-=(k&(-k));
    }
    return q;
}
void update(vector<int>&a,int k)
{
    while(k<a.size())
    { a[k]+=1;
      k+=(k&(-k));
    }

}
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	vector<vector<int>>a1(10,vector<int>(100011,0));

  for(int i=2;i*i<=100000;i++)
      {
       for(int j=i*i;j<=100000;j+=i*i)
            a[j]=true;
      }
  vector<int>b;
  for(int j=2;j<=100000;j++)
        if(!a[j])
        b.push_back(j);
 for(auto i:b)
 { string se=to_string(i);
   vector<bool>dig(10,false);

   for(auto j:se)
   { if(!dig[j-'0'])
       {
       update(a1[j-'0'],i);
       dig[j-'0']=true;
       }
   }

 }
 int q;
 cin>>q;
 while(q--)
 { int l,r,d;
   cin>>l>>r>>d;
     cout<<sum(a1[d],r)-sum(a1[d],l-1)<<"\n";
 }

 //cout<<b.size();
return 0;}
